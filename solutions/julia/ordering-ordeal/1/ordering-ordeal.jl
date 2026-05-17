function sortquantity!(qty)
	idx = sortperm(qty, rev=true)
	sort!(qty, rev=true)
	return idx
end

function sortcustomer(cust, srtperm)
	return cust[srtperm]
end

function production_schedule!(cust, qty)
	idx = sortquantity!(qty)
	return (sortcustomer(cust, idx), sortperm(idx))
end
