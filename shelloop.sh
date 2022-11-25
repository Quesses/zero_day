#!/usr/bin/env bash
let z=5
echo $z

echo; echo "Hit a key, then hit return."
read Keypr

case "$Keypr" in
	[[:lower:]]	) echo "lowercase letter";;
	[0-9]		) echo "digit";;
	*		) echo "char";;
esac
