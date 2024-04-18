import requests
from .exceptions import ServerError

class WCPSClient:
    """Client to send requests to a WCPS server."""
    
    def __init__(self, server_url):
        self.server_url = server_url

    def execute_query(self, query):
        """Execute a WCPS query and return the server's response."""
        try:
            response = requests.get(f"{self.server_url}?query={query}")
            response.raise_for_status()
        except requests.HTTPError as e:
            raise ServerError(f"HTTP error occurred: {e}")
        except requests.RequestException as e:
            raise ServerError(f"Error connecting to server: {e}")
        return response.json()
