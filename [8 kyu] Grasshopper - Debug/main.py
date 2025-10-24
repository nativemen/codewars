def weather_info(temp):
    c = convert_to_celsius(temp)
    if c <= 0:
        return f"{c}" + " is freezing temperature"
    else:
        return f"{c}" + " is above freezing temperature"


def convert_to_celsius(temperature):
    return (temperature - 32.0) * 5.0 / 9.0
