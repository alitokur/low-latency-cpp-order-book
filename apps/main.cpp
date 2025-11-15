
#include "../include/order_book.h"

int main (int argc, char *argv[]) {

    OrderBook book;
    book.add_order(1, Side::Buy, 2, 100, 0, 0);
    book.add_order(2, Side::Sell, 2, 100, 0, 0);
    book.display_orders();
    book.execute_order(16, 5);
    book.display_orders();

    return 0;
}
