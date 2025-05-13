<Button onClick={resetFilters} variant="outline">Reset Filters</Button>
This button calls the resetFilters function when clicked.



const resetFilters = () => {
    setCategory("");              
    setSelectedBrands([]);       
    setPriceMin("");             
    setPriceMax("");     };