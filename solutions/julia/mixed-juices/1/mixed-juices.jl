function time_to_mix_juice(juice)
	if juice == "Pure Strawberry Joy"
		0.5
	elseif juice == "Energizer" || juice == "Green Garden"
		1.5
	elseif juice == "Tropical Island"
		3.0
	elseif juice == "All or Nothing"
		5.0
	else
		2.5
	end
end

function wedges_from_lime(size)
	if size == "small"
		6
	elseif size == "medium"
		8
	elseif size == "large"
		10
	end
end

function limes_to_cut(needed, limes)
	needed == 0 && return 0
	i = 0
	slices = 0
	for lime in limes
		slices += wedges_from_lime(lime)
		i += 1
		if slices >= needed
			return i
		end
	end
	return i
end

function order_times(orders)
	vec = []
	for order in orders
		push!(vec, time_to_mix_juice(order))
	end
	return vec
end

function remaining_orders(time_left, orders)
	while time_left > 0.0
		if size(orders, 1) == 0
			return []
		end
		time_left -= time_to_mix_juice(orders[1])
		popfirst!(orders)
	end
	return orders
end
