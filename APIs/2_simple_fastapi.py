import joblib
import logging
from fastapi import FastAPI, Request
from pydantic import BaseModel
from fastapi.responses import HTMLResponse, JSONResponse
from fastapi.templating import Jinja2Templates

logger = logging.getLogger(__name__)
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

app = FastAPI(title='Simple Linear Regression', version='1.0.0')
templates = Jinja2Templates(directory='templates')

try:
    model = joblib.load(r'/Users/amith2831/Desktop/PROJECTS/SYSTEM DESIGN/Simple_Regression/model.pkl')
    logger.info("Model loaded successfully")
except Exception as e:
    raise RuntimeError(f"Model could not be loaded: {e}")


class RegressionInput(BaseModel):
    x: int

    model_config = {
        'json_schema_extra': {
            'example': {'x': 5}
        }
    }


@app.get('/', response_class=HTMLResponse)
def index(request: Request):
    return templates.TemplateResponse(request=request, name="index.html")


@app.get('/health')
def health():
    return {"status": "ok", "model_loaded": model is not None}


@app.post('/predict')
def predict(data: RegressionInput):
    try:
        y = model.predict([[data.x]])
        output = int(y[0])
        logger.info(f"Input: {data.x}, Prediction: {output}")
        return {"input": data.x, "prediction": output}

    except Exception as e:
        logger.error(f"Prediction failed: {e}")
        return JSONResponse(status_code=500, content={"error": str(e)})