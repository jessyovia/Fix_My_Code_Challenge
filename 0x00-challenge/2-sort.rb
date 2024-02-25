#!/usr/bin/env ruby

# Check if there are arguments provided
if ARGV.empty?
  puts "Usage: #{$PROGRAM_NAME} <numbers>"
  exit(1)
end

# Extract numerical arguments and sort them
numbers = ARGV.select { |arg| arg.to_i.to_s == arg }.map(&:to_i).sort

# Print sorted numbers
puts numbers
