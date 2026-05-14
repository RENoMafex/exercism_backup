function raindrops(number)
	retval = ""
	divflag = false
	if number % 3 == 0
		divflag = true
		retval = string(retval, "Pling")
	end
	if number % 5 == 0
		divflag = true
		retval = string(retval, "Plang")
	end
	if number % 7 == 0
		divflag = true
		retval = string(retval, "Plong")
	end
	if divflag == false
		retval = string(number)
	end
	return retval
end
