let check_string str =
  if Str.string_match (Str.regexp ".*it.*") str 0 then
    "YES"
  else
    "NO"

let rec read_and_check t =
  if t > 0 then
    let input_str = read_line () in
    let result = check_string input_str in
    print_endline result;
    read_and_check (t - 1)

let () =
  let t = read_int () in
  read_and_check t
