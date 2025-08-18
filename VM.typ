= Virtual Machine

== What is a Virtual Machine ?
A Virtual Machine (VM) is a program that behaves like a computer. It simulates the components of a physical machine - CPU, memory, registers, stack, etc.
It's designed such that other programs can run on top of it, as if it were real hardware.

== Key ideas
- #text(weight: "bold")[Fetch] -> read the next instruction (bytecode or opcode).
- #text(weight: "bold")[Decode] -> figure out what the instruction means.
- #text(weight: "bold")[Execute] -> perform the action (like addition of numbers, jumps and call functions).

== Data Types used:

#table(
  columns: (auto, auto, auto),
  align: horizon,
  table.header([*Data Type*], [*Typedef used*], [*Used for*]),
  $"long int"$,
  [
    int32 -> 32 bits
  ],
  [
    Register
  ]
)
