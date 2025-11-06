void rgb(int r, int g, int b, char hex[6 + 1]) {
    r = (r < 0) ? 0 : ((r > 255) ? 255 : r);
    g = (g < 0) ? 0 : ((g > 255) ? 255 : g);
    b = (b < 0) ? 0 : ((b > 255) ? 255 : b);
    sprintf(hex, "%02X%02X%02X", r, g, b);
}

static int wrap(int color) {
    if (color < 0) {
        return 0;
    }

    if (color > 255) {
        return 255;
    }

    return color;
}

void rgb(int r, int g, int b, char hex[6 + 1]) {
    sprintf(hex, "%02X%02X%02X", wrap(r), wrap(g), wrap(b));
}