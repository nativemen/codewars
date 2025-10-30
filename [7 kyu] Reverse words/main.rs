fn reverse_words(str: &str) -> String {
    str.split_whitespace()
        .map(|s| s.chars().rev().collect::<String>())
        .collect::<Vec<_>>()
        .join(" ")
}

fn reverse_words(str: &str) -> String {
    let mut result = String::new();
    let mut word = String::new();

    for c in str.chars() {
        if c.is_whitespace() {
            result.push_str(word.as_str());
            word.clear();
            result.push(c);
        } else {
            word.insert(0, c);
        }
    }

    result.push_str(word.as_str());

    result
}
