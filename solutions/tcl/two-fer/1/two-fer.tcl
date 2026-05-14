proc two-fer {{name ""}} {
    if {$name eq ""} {
        return "One for you, one for me."
    } else {
        return "One for $name, one for me."
    }
}
