#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    int x;
    cin>>x;
    int des = x / 10;
    int ed = x % 10;
    if (des == 2) {
        cout << "двадцать ";}
    if (des == 3) {
        cout << "тридцать ";}
    if (des == 4) {
        cout << "сорок ";}
    if (des == 5) {
        cout << "пятьдесят ";}
    if (des == 6) {
        cout << "шестьдесят";}
    if (des == 7) {
        cout << "семьдесят ";}
    if (des == 8) {
        cout << "восемьдесят ";}
    if (des == 9) {
        cout << "девяносто ";}
    if (des == 10) {
        cout << "десять ";}
    if (des == 11) {
        cout << "одиннадцать ";}
    if (des == 12) {
        cout << "двенадцать ";}
    if (des == 13) {
        cout << "тринадцать ";}
    if (des == 14) {
        cout << "четырнадцать ";}
    if (des == 15) {
        cout << "пятнадцать ";}
    if (des == 16) {
        cout << "шеснадцать ";}
    if (des == 17) {
        cout << "семьнадцать ";}
    if (des == 18) {
        cout << "восемьнадцать ";}
    if (des == 19) {
        cout << "девятнадцать ";}
    if (ed == 1) {
        cout <<"один";}
    if (ed == 2) {
        cout <<"два";}
    if (ed == 3) {
        cout <<"три";}
    if (ed == 4) {
        cout <<"четыре";}
    if (ed == 5) {
        cout <<"пять";}
    if (ed == 6) {
        cout <<"шесть";}
    if (ed == 7) {
        cout <<"семь";}
    if (ed == 8) {
        cout <<"восемь";}
    if (ed == 9) {
        cout <<"девять";}
    return 0;
}
