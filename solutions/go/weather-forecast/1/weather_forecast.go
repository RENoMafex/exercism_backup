// Package weather provides a function for the weather forecast.
package weather

// CurrentCondition shall be the current weather condition.
var CurrentCondition string

// CurrentLocations shall be the city where you are now.
var CurrentLocation string

// Forecast returns a string, which tells the current weather condition at a givcen city.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
