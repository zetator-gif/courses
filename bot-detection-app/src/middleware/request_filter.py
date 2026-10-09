cd c:\work\courses\bot-detection-app
python -m venv .venv
. .venv\Scripts\activate
pip install -r requirements.txt
pytest
uvicorn src.main:app --reload --host 0.0.0.0 --port 8000cd c:\work\courses\bot-detection-app
python -m venv .venv
. .venv\Scripts\activate
pip install -r requirements.txt
pytest
uvicorn src.main:app --reload --host 0.0.0.0 --port 8000def filter_requests(request):
    # Implement logic to filter requests and detect potential bot traffic
    # This is a placeholder for the actual detection logic
    pass