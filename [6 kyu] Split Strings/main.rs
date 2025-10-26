fn solution(s: &str) -> Vec<String> {
    let mut result = Vec::new();
    let mut s = s.to_string();

    if s.len() % 2 != 0 {
        s += "_";
    }

    for i in (0..s.len()).step_by(2) {
        result.push(s[i..i + 2].to_string());
    }

    result
}

fn solution(s: &str) -> Vec<String> {
    s.chars()
        .collect::<Vec<_>>()
        .chunks(2)
        .map(|chk| format!("{:_<2}", chk.iter().collect::<String>()))
        .collect()
}

fn solution(s: &str) -> Vec<String> {
    s.chars()
        .chain(std::iter::once('_'))
        .collect::<Vec<_>>()
        .chunks_exact(2)
        .map(|chk| chk.iter().collect())
        .collect()
}
