import pandas as pd

data = pd.read_csv(r'Simple_Regression/data.csv')
X = data['x'].values.reshape(-1,1)
y = data['y'].values.reshape(-1,1)

from sklearn.linear_model import LinearRegression
lr_model = LinearRegression()
print('[INFO] Model training started...')
lr_model.fit(X, y)
print('[INFO] Model training complete...')

import joblib
joblib.dump(lr_model, r'Simple_Regression/model.pkl')
print('[INFO] Model serialized and saved to disk...')