#!/usr/bin/node

const size = parseInt(process.argv[2]);

if (isNaN(size)) {
  console.log('Missing size');
  console.log('Usage: ./1-print_square.js <size>');
  console.log('Example: ./1-print_square.js 10');
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  let row = '';
  for (let j = 0; j < size; j++) {
    row += '#';
  }
  console.log(row);
}
