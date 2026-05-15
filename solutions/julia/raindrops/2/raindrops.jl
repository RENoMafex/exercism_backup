function raindrops(number)
	ret = (number % 3 == 0 ? "Pling" : "")
	ret = (number % 5 == 0 ? string(ret, "Plang") : ret)
	ret = (number % 7 == 0 ? string(ret, "Plong") : ret)
	ret == "" ? string(number) : ret
end
