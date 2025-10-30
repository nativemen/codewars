def reverse_words(text: str):
    result = ""
    word = ""

    for i, c in enumerate(text):
        if c == " ":
            result += word[::-1]
            result += " "
            word = ""
        else:
            word += c

    result += word[::-1]

    return result


def reverse_words(text: str):
    return " ".join([word[::-1] for word in text.split(" ")])


def reverse_words(text: str):
    return " ".join(word[::-1] for word in text.split(" "))
