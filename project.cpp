struct product
{
    sting cretogery;
    string brand;
    double price;
    srting color;
    string size;

    product(string c, string b, double p, string col, string s)
        : category(c), brand(b), price(p), color(col), size(s) {}
};

class ProductCasting
{
private:
    vector<product> products;

public:
    void addproduct(const Products &product)
    {
        products.push_back(product);
    }

}

vector<product>
filterproduct(const unordered_map<string, string> &filters)
{
    vector<product> result;
}
doulbe priceMin = 0, pmax = 1e9;
if (filter.count("pricemin"))
    pricemin = stod(filter.at("price min")) if (filter.count("pmax")) pmax = stod(filter.at("price max"));

for (const auto &product : products)
{
    if (product.price < priceMin || product.price > priceMax)
        continue;
    if (filters.count("category") && product.category != filters.at("category"))
        continue;
    if (filters.count("brand") && product.brand != filters.at("brand"))
        continue;
    if (filters.count("color") && product.color != filters.at("color"))
        continue;
    if (filters.count("size") && product.size != filters.at("size"))
        continue;

    result.push_back(product); // if all checks pass
}