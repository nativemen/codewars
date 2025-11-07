fn to_weird_case(s: &str) -> String {
    let mut is_upper = true;
    let mut result = String::new();

    for (i, c) in s.chars().enumerate() {
        if c == ' ' {
            result.push(' ');
            is_upper = true;
            continue;
        }

        if is_upper {
            result.push(c.to_ascii_uppercase());
        } else {
            result.push(c.to_ascii_lowercase());
        }
        is_upper = !is_upper;
    }

    result
}
