import joblib
from flask import Flask, render_template, request

app = Flask(__name__)
model = joblib.load(r'/Users/amith2831/Desktop/PROJECTS/SYSTEM DESIGN/Simple_Regression/model.pkl')

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():
    x = int(request.form['input'])
    y = model.predict([[x]])

    output = y[0]

    return render_template('index.html', prediction=int(output))
    


if __name__ == '__main__':
    app.run(debug=True)