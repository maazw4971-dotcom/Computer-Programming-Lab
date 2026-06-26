#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
    double totalValue;
};

class Inventory {
private:
    Product products[100];
    int count;

public:
    Inventory() { count = 0; }

    void calculateValue(Product &p) { p.totalValue = p.quantity * p.price; }

    void addProduct() {
        if (count >= 100) { cout << "Inventory full!\n"; return; }
        Product p;
        cout << "Enter Product ID: "; cin >> p.id;
        cin.ignore();
        cout << "Enter Product Name: "; getline(cin, p.name);
        cout << "Enter Quantity: "; cin >> p.quantity;
        cout << "Enter Price: "; cin >> p.price;
        calculateValue(p);
        products[count++] = p;
        cout << "Product added successfully!\n";
    }

    void displayProducts() {
        if (count == 0) { cout << "No products in inventory!\n"; return; }
        cout << "\n=====================================================================\n";
        cout << left << setw(10) << "ID"
             << setw(25) << "Name"
             << setw(12) << "Quantity"
             << setw(12) << "Price"
             << setw(15) << "Total Value" << endl;
        cout << "---------------------------------------------------------------------\n";
        for (int i = 0; i < count; i++) {
            cout << left << setw(10) << products[i].id
                 << setw(25) << products[i].name
                 << setw(12) << products[i].quantity
                 << setw(12) << fixed << setprecision(2) << products[i].price
                 << setw(15) << fixed << setprecision(2) << products[i].totalValue << endl;
        }
        cout << "=====================================================================\n";
    }

    int searchProduct(int id) {
        for (int i = 0; i < count; i++) if (products[i].id == id) return i;
        return -1;
    }

    void searchAndDisplay(int id) {
        int index = searchProduct(id);
        if (index != -1) {
            cout << "\nProduct Found:\n";
            cout << "=====================================================================\n";
            cout << left << setw(10) << "ID"
                 << setw(25) << "Name"
                 << setw(12) << "Quantity"
                 << setw(12) << "Price"
                 << setw(15) << "Total Value" << endl;
            cout << "---------------------------------------------------------------------\n";
            cout << left << setw(10) << products[index].id
                 << setw(25) << products[index].name
                 << setw(12) << products[index].quantity
                 << setw(12) << fixed << setprecision(2) << products[index].price
                 << setw(15) << fixed << setprecision(2) << products[index].totalValue << endl;
            cout << "=====================================================================\n";
        } else cout << "Product not found!\n";
    }

    void increaseQuantity(int id, int qty) {
        int index = searchProduct(id);
        if (index != -1) {
            products[index].quantity += qty;
            calculateValue(products[index]);
            cout << "Quantity increased successfully!\n";
        } else cout << "Product not found!\n";
    }

    void decreaseQuantity(int id, int qty) {
        int index = searchProduct(id);
        if (index != -1) {
            if (products[index].quantity >= qty) {
                products[index].quantity -= qty;
                calculateValue(products[index]);
                cout << "Quantity decreased successfully!\n";
            } else cout << "Insufficient quantity!\n";
        } else cout << "Product not found!\n";
    }

    void updatePrice(int id, double newPrice) {
        int index = searchProduct(id);
        if (index != -1) {
            products[index].price = newPrice;
            calculateValue(products[index]);
            cout << "Price updated successfully!\n";
        } else cout << "Product not found!\n";
    }

    void deleteProduct(int id) {
        int index = searchProduct(id);
        if (index != -1) {
            for (int i = index; i < count - 1; i++) products[i] = products[i + 1];
            count--;
            cout << "Product deleted successfully!\n";
        } else cout << "Product not found!\n";
    }

    void calculateTotalStockValue() {
        double total = 0;
        for (int i = 0; i < count; i++) total += products[i].totalValue;
        cout << "\nTotal Stock Value = " << fixed << setprecision(2) << total << endl;
    }

    void sortProducts() {
        for (int i = 0; i < count - 1; i++)
            for (int j = i + 1; j < count; j++)
                if (products[i].id > products[j].id) {
                    Product temp = products[i];
                    products[i] = products[j];
                    products[j] = temp;
                }
        cout << "Products sorted by ID!\n";
    }

    void saveData() {
        ofstream file("inventory.txt");
        for (int i = 0; i < count; i++) {
            file << products[i].id << ","
                 << products[i].name << ","
                 << products[i].quantity << ","
                 << products[i].price << ","
                 << products[i].totalValue << endl;
        }
        file.close();
        cout << "\nData saved to file!\n";
        displayProducts();
    }

    void loadData() {
        ifstream file("inventory.txt");
        if (!file) { cout << "No data file found!\n"; return; }
        count = 0;
        string line;
        while (getline(file, line)) {
            if (line.empty()) continue;
            stringstream ss(line);
            Product p;
            string token;
            getline(ss, token, ','); p.id = stoi(token);
            getline(ss, p.name, ',');
            getline(ss, token, ','); p.quantity = stoi(token);
            getline(ss, token, ','); p.price = stod(token);
            getline(ss, token, ','); p.totalValue = stod(token);
            products[count++] = p;
        }
        file.close();
        cout << "\nData loaded from file!\n";
        displayProducts();
    }
};

int main() {
    Inventory inv;
    int choice;
    inv.loadData();

    do {
        cout << "\n--- Shop Inventory Management System ---\n";
        cout << "1. Add Product\n2. Display Products\n3. Search Product\n";
        cout << "4. Increase Quantity\n5. Decrease Quantity\n6. Update Price\n";
        cout << "7. Delete Product\n8. Calculate Total Stock Value\n9. Sort Products\n";
        cout << "10. Save Data\n11. Load Data\n12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inv.addProduct(); inv.displayProducts(); break;
            case 2: inv.displayProducts(); break;
            case 3: { int id; cout << "Enter Product ID to search: "; cin >> id; inv.searchAndDisplay(id); break; }
            case 4: { int id, qty; cout << "Enter Product ID: "; cin >> id; cout << "Enter Quantity to increase: "; cin >> qty; inv.increaseQuantity(id, qty); inv.displayProducts(); break; }
            case 5: { int id, qty; cout << "Enter Product ID: "; cin >> id; cout << "Enter Quantity to decrease: "; cin >> qty; inv.decreaseQuantity(id, qty); inv.displayProducts(); break; }
            case 6: { int id; double price; cout << "Enter Product ID: "; cin >> id; cout << "Enter New Price: "; cin >> price; inv.updatePrice(id, price); inv.displayProducts(); break; }
            case 7: { int id; cout << "Enter Product ID to delete: "; cin >> id; inv.deleteProduct(id); inv.displayProducts(); break; }
            case 8: inv.calculateTotalStockValue(); inv.displayProducts(); break;
            case 9: inv.sortProducts(); inv.displayProducts(); break;
            case 10: inv.saveData(); break;
            case 11: inv.loadData(); break;
            case 12: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 12);

    return 0;
}
