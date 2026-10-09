def setup_logging(log_file='app.log'):
    import logging
    logging.basicConfig(
        filename=log_file,
        level=logging.DEBUG,
        format='%(asctime)s - %(levelname)s - %(message)s'
    )

def log_event(message):
    import logging
    logging.info(message)
