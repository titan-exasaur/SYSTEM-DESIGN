import joblib
import logging
from flask import Flask, render_template, request

app = Flask(__name__)
model = joblib.load(r'/Users/amith2831/Desktop/PROJECTS/SYSTEM DESIGN/Simple_Regression/model.pkl')
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')


@app.route('/')
def index():
    return render_template('index.html')

@app.route('/health')
def health():
    return {'status': 'ok',
            'model_loaded': model is not None}

@app.route('/predict', methods=['POST'])
def predict():
    try:
        x = int(request.form['input'])
        y = model.predict([[x]])

        output = y[0]
        
        app.logger.info(f"Input: {x}, Prediction: {output}")

        return render_template('index.html', prediction=int(output))
    
    except (ValueError, KeyError) as e:
        app.logger.error(f'Invalid input: {e}')
        return render_template('index.html', error='Please enter a valid integer')
    


if __name__ == '__main__':
    app.run(debug=True)




"""
the API has one end point, 
that is the /predict
    which takes the input from the user via front end 
    and 
    returns the value of output

there are 2 routes, 
    '/': renders the index.html via GET
    '/predict': renders index.html and plugs in Jinja2 variable *prediction*

Full Flow
Browser                          Flask
  |                                |
  |  GET /                         |
  | -----------------------------> |  renders index.html (prediction=None)
  | <------------------------------ |  returns empty form
  |                                |
  |  POST /predict (input=5)       |
  | -----------------------------> |  runs model → 6
  |                                |  renders index.html (prediction=6)
  | <------------------------------ |  returns filled HTML, still in same response
"""