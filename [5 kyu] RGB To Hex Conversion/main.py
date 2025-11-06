def rgb(r, g, b):
    def clamp(color):
        return max(0, min(255, color))

    return "{:02X}{:02X}{:02X}".format(clamp(r), clamp(g), clamp(b))


def rgb(r, g, b):
    def clamp(color):
        return max(0, min(255, color))

    return ("{:02X}" * 3).format(clamp(r), clamp(g), clamp(b))


def rgb(r, g, b):
    clamp = lambda color: max(0, min(255, color))

    return ("{:02X}" * 3).format(clamp(r), clamp(g), clamp(b))


def rgb(r, g, b):
    return "".join("{:02X}".format(max(0, min(255, x))) for x in [r, g, b])
