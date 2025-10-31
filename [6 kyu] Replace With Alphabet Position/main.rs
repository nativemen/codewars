fn alphabet_position(text: &str) -> String {
    text.chars()
        .filter(|c| c.is_alphabetic())
        .map(|c| (c.to_ascii_lowercase() as i32 - 'a' as i32 + 1).to_string())
        .collect::<Vec<_>>()
        .join(" ")
}

use std::collections::HashMap;

fn alphabet_position(text: &str) -> String {
    let maps: HashMap<char, &str> = [
        ('a', "1"),
        ('b', "2"),
        ('c', "3"),
        ('d', "4"),
        ('e', "5"),
        ('f', "6"),
        ('g', "7"),
        ('h', "8"),
        ('i', "9"),
        ('j', "10"),
        ('k', "11"),
        ('l', "12"),
        ('m', "13"),
        ('n', "14"),
        ('o', "15"),
        ('p', "16"),
        ('q', "17"),
        ('r', "18"),
        ('s', "19"),
        ('t', "20"),
        ('u', "21"),
        ('v', "22"),
        ('w', "23"),
        ('x', "24"),
        ('y', "25"),
        ('z', "26"),
    ]
    .iter()
    .cloned()
    .collect();
    let mut result = String::new();

    for c in text.chars() {
        if c.is_ascii_alphabetic() {
            if !result.is_empty() {
                result.push(' ');
            }

            result.push_str(maps[&c.to_ascii_lowercase()]);
        }
    }

    result
}
