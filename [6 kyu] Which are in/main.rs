fn in_array(arr_a: &[&str], arr_b: &[&str]) -> Vec<String> {
    let mut result = Vec::new();

    for &s1 in arr_a.iter() {
        for &s2 in arr_b.iter() {
            if s2.contains(s1) {
                if !result.contains(&s1.to_string()) {
                    result.push(s1.to_string());
                }
                break;
            }
        }
    }

    result.sort();

    result
}

fn in_array(arr_a: &[&str], arr_b: &[&str]) -> Vec<String> {
    let mut result = Vec::new();

    for &s1 in arr_a.iter() {
        for &s2 in arr_b.iter() {
            if s2.contains(s1) {
                result.push(s1.to_string());
                break;
            }
        }
    }

    result.sort();
    result.dedup();

    result
}

use itertools::Itertools;

fn in_array(arr_a: &[&str], arr_b: &[&str]) -> Vec<String> {
    arr_a
        .iter()
        .map(|s1| s1.to_string())
        .filter(|s1| arr_b.into_iter().any(|&s2| s2.contains(s1.as_str())))
        .unique()
        .sorted()
        .collect()
}
