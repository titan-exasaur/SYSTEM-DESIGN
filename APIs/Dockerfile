# BASE IMAGE
FROM python:3.11-slim

# WORKING DIRECTORY
WORKDIR /app

# DEPENDENCIES
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

# APP CODE
COPY 4_api_versioning.py .
COPY artifacts/ artifacts/
COPY templates/ templates/

# PORT
EXPOSE 8000

# START COMMAND
CMD ["uvicorn", "4_api_versioning:app", "--host", "0.0.0.0", "--port", "8000"]