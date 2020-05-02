/**
 * 
 * Implmentation of the Heap Sort algorithm. The heapsort method below can sort
 * the elements both in ascending order as in descending order. To sort the
 * elements in ascending order, a Max-Heap is used. To sort the elements in
 * descending order, a Min-Heap is used.
 * 
 * Time complexity: O(n*logn);
 * Space complexity: O(1);
 * Stability: Non-stable;
 * 
 * Author: Rodolfo Marinho
 * Contact: rodolfo.silva@maisunifacisa.com.br
 *  
**/

#include <iostream>

void swap(int arr[], int pos_a, int pos_b)
{
  int tmp = arr[pos_a];
  arr[pos_a] = arr[pos_b];
  arr[pos_b] = tmp;
}

void min_heapify(int arr[], int n_elements, int pos)
{
  int smallest_pos = pos;
  if (pos * 2 + 1 < n_elements && arr[smallest_pos] > arr[pos * 2 + 1])
    smallest_pos = pos * 2 + 1;
  if (pos * 2 + 2 < n_elements && arr[smallest_pos] > arr[pos * 2 + 2])
    smallest_pos = pos * 2 + 2;

  if (smallest_pos != pos)
  {
    swap(arr, pos, smallest_pos);
    min_heapify(arr, n_elements, smallest_pos);
  }
}

void init_min_heap(int arr[], int n_elements)
{
  for (int i = n_elements - 1; i >= 0; --i)
  {
    min_heapify(arr, n_elements, i);
  }
}

void max_heapify(int arr[], int n_elements, int pos)
{
  int largest_pos = pos;
  if (pos * 2 + 1 < n_elements && arr[largest_pos] < arr[pos * 2 + 1])
    largest_pos = pos * 2 + 1;
  if (pos * 2 + 2 < n_elements && arr[largest_pos] < arr[pos * 2 + 2])
    largest_pos = pos * 2 + 2;

  if (largest_pos != pos)
  {
    swap(arr, pos, largest_pos);
    max_heapify(arr, n_elements, largest_pos);
  }
}

void init_max_heap(int arr[], int n_elements)
{
  for (int i = n_elements - 1; i >= 0; --i)
  {
    max_heapify(arr, n_elements, i);
  }
}

void heapsort(int arr[], int n_elements, bool reverse)
{
  if (!reverse)
    init_max_heap(arr, n_elements);
  else
    init_min_heap(arr, n_elements);

  for (int i = n_elements - 1; i > 0; --i)
  {
    swap(arr, 0, i);
    if (!reverse)
      max_heapify(arr, i, 0);
    else
      min_heapify(arr, i, 0);
  }
}

void print_arr(int arr[], int n_elements)
{
  std::cout << "[";
  for (int i = 0; i < n_elements; ++i)
  {
    std::cout << " " << arr[i];
  }
  std::cout << " ]" << std::endl;
}

int main()
{
  int arr[10] = {3, 9, 7, 5, 1, 10, 6, 2, 4, 8};
  std::cout << "Array before sorting: ";
  print_arr(arr, 10);
  heapsort(arr, 10, false);
  std::cout << "Array after sorting (ascending): ";
  print_arr(arr, 10);

  int arr2[10] = {3, 9, 7, 5, 1, 10, 6, 2, 4, 8};
  std::cout << "Array before sorting: ";
  print_arr(arr2, 10);
  heapsort(arr2, 10, true);
  std::cout << "Array after sorting (descending): ";
  print_arr(arr2, 10);
}
