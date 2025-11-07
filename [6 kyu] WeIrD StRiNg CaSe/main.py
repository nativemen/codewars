def to_weird_case(words):
    is_upper = True
    result = ""

    for c in words:
        if c == " ":
            result += " "
            is_upper = True
            continue

        result += c.upper() if is_upper else c.lower()
        is_upper = not is_upper

    return result


def to_weird_case(words):
    return " ".join(
        "".join(c.upper() if i % 2 == 0 else c for i, c in enumerate(word.lower()))
        for word in words.split()
    )
