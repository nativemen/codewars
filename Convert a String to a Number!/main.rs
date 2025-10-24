fn string_to_number(s: &str) -> i32 {
    i32::from_str_radix(s, 10).unwrap()
}
