function rotate(n, str)
	if n == 0 || n == 26
		return str
	end

	if typeof(str) != Char
		s = ""
		for c in str
			if isletter(c)
				c_new = c + n
				if !isletter(c_new) || isuppercase(c) != isuppercase(c_new)
					c_new -= 26
				end
				c = c_new
			end
			s = string(s, c)
		end
		return s
	else
		c = str + n
		if !isletter(c) || isuppercase(str) != isuppercase(c)
			c -= 26
		end
		return c
	end
end
