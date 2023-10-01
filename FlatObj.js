let res = {};

function flatObj(obj, pre) {
  Object.keys(obj).map((key) => {
    if (typeof obj[key] === "object") {
      const val = pre === "" ? key : pre + "_" + key;
      flatObj(obj[key], val);
    } else {
      const val = pre === "" ? key : pre + "_" + key;
      res[val] = obj[key];
    }
  });
  return res;
}

const detail = {
  name: "Afroz",
  age: 23,
  clg: {
    name: "IIIT",
    place: "Gwl",
    branch: {
      cs: "CS",
      IT: "IT",
    },
  },
};

console.log(flatObj(detail, "detail"));
