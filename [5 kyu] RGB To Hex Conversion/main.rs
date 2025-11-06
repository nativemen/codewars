fn rgb(r: i32, g: i32, b: i32) -> String {
    fn clamp(color: i32) -> i32 {
        0.max(255.min(color))
    }

    format!("{:02X}{:02X}{:02X}", clamp(r), clamp(g), clamp(b))
}

fn rgb(r: i32, g: i32, b: i32) -> String {
    [r, g, b]
        .iter()
        .map(|&color| format!("{:02X}", 0.max(255.min(color))))
        .collect::<String>()
}

fn rgb(r: i32, g: i32, b: i32) -> String {
    [r, g, b]
        .map(|color| format!("{:02X}", 0.max(255.min(color))))
        .join("")
}

fn rgb(r: i32, g: i32, b: i32) -> String {
    [r, g, b]
        .map(|color| format!("{:02X}", color.clamp(0, 255)))
        .join("")
}

use itertools::Itertools;

fn rgb(r: i32, g: i32, b: i32) -> String {
    [r, g, b]
        .iter()
        .map(|&color| format!("{:02X}", 0.max(255.min(color))))
        .join("")
}
