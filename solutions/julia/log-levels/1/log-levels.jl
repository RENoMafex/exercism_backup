function message(msg)
	split_msg = split(msg)
	return join(split_msg[2:length(split_msg)], " ")
end

function log_level(msg)
	split_msg = split(msg)
	return lowercase(split_msg[1][2:length(split_msg[1]) - 2])
end

function reformat(msg)
	string(message(msg), " (", log_level(msg), ")")
end
