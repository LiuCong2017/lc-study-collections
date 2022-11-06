<script lang="ts">
/**
 * 基础数据类型的监听：
 */
const name = ref<string>('张三')
watch(name, (newValue, oldValue) => {
  console.log('watch===', newValue, oldValue)
})

/**
 * 复杂数据类型的监听：
 */
interface UserInfo {
  name: string
  age: number
}

const userInfo = reactive<UserInfo>({
  name: '张三',
  age: 10
})
// 监听整个对象
watch(userInfo, (newValue, oldValue) => {
  console.log('watch userInfo', newValue, oldValue)
})

// 监听某个属性
watch(() => userInfo.name,  (newValue, oldValue) => {
  console.log('watch name', newValue, oldValue)
})

/**
 * 监听多个源
 */
const name = ref<string>('张三')
const userInfo = reactive({
  age: 18
})

// 同时监听name和userInfo的age属性
watch([name, () => userInfo.age], ([newName, newAge], [oldName, oldAge]) => {
  //
})
</script>