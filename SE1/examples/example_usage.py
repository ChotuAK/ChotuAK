import sys
sys.path.append('/Users/anshukushwaha/Desktop/SE1/wcpslib')

from wcpslib import WCPSClient


def main():
    # Setup the WCPS server URL
    wcps_server_url = "https://standards.rasdaman.com/demo_wcps.html"
    client = WCPSClient(wcps_server_url)

    # Specify the coverage ID you want to query
    coverage_id = "MODIS_Terra_AOD"

    # Initialize the Datacube with the client and coverage id
    cube = Datacube(coverage_id, client)

    try:
        # Example of fetching general coverage data
        print("Fetching general coverage data...")
        general_coverage = cube.get_coverage()
        print("General Coverage Data:", general_coverage)

        # Example of calculating average temperature
        # Note: Modify the time range according to the available data on the server
        print("\nCalculating average temperature for a specific time range...")
        avg_temp = cube.average_temperature("time('2021-01-01T00:00:00Z':'2021-12-31T23:59:59Z')")
        print("Average Temperature:", avg_temp)

        # Example of finding maximum precipitation in a given spatial extent
        # Note: Modify the spatial extent according to the available data
        print("\nDetermining maximum precipitation within a given spatial extent...")
        max_precip = cube.max_precipitation("Lat(10:50), Long(10:50)")
        print("Maximum Precipitation:", max_precip)

    except ServerError as e:
        print(f"An error occurred when communicating with the WCPS server: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    main()
