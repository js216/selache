// SPDX-License-Identifier: MIT
// cctest_csmith_8ec30ea5.c --- cctest case csmith_8ec30ea5 (csmith seed 2395147941)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcebb2847 */
/* @exp_ticks 0x859 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2395147941 -o /home/agent1/fast_data/tmp/csmith_gen_0rrzlom3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint8_t  f1;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   const struct S0  f1;
   uint64_t  f2;
};

union U2 {
   uint16_t  f0;
};

union U3 {
   int32_t  f0;
   const struct S0  f1;
   int64_t  f2;
   uint16_t  f3;
};

union U4 {
   struct S0  f0;
};

union U5 {
   uint64_t  f0;
   struct S0  f1;
   int16_t  f2;
};


static uint64_t g_21 = 0x4A87FCE6BB2F1448LL;
static int8_t g_22 = 0L;
static int64_t g_23[2][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
static int64_t g_24 = 0x2401DBDAE4F9DBC9LL;
static int16_t g_28 = 1L;
static uint16_t g_33 = 0xEC56L;
static union U1 g_35 = {0x4ED25E42L};
static uint32_t g_46 = 0x12535B5BL;
static int16_t g_54[1] = {0x94C6L};
static int8_t g_62[1] = {0L};
static int32_t g_63[2] = {(-1L),(-1L)};
static int16_t g_83 = (-1L);
static union U5 g_90 = {1UL};
static int8_t g_190 = 1L;
static uint16_t g_196[4][2] = {{0x0202L,0x0202L},{0x0202L,0x0202L},{0x0202L,0x0202L},{0x0202L,0x0202L}};
static int16_t g_341 = (-1L);
static uint16_t g_372 = 65535UL;



static union U2  func_1(void);
static union U1  func_6(int64_t  p_7);
static int64_t  func_8(union U5  p_9, int8_t  p_10);
static union U5  func_11(int8_t  p_12, int32_t  p_13, union U1  p_14, union U5  p_15);




static union U2  func_1(void)
{ 
    union U3 l_16 = {-3L};
    int32_t l_25 = 0x885BD52AL;
    int32_t l_26 = 0x8FDADF86L;
    int32_t l_27 = (-8L);
    int32_t l_29 = 7L;
    uint16_t l_30 = 65535UL;
    int8_t l_34 = (-1L);
    union U5 l_36 = {0xF9080254F8D36FBCLL};
    uint64_t l_360[3][3];
    int32_t l_379 = 0x42F424CEL;
    int32_t l_384 = 0x4A05A017L;
    int64_t l_385 = 1L;
    int64_t l_387 = 1L;
    union U2 l_392 = {1UL};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_360[i][j] = 18446744073709551612UL;
    }
    if ((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((func_6(func_8(func_11(((l_16 , (((((safe_mod_func_uint16_t_u_u((l_34 = (safe_mul_func_uint8_t_u_u((g_21 , (--l_30)), (g_33 &= g_22)))), g_28)) ^ g_28) >= 255UL) || 0x8BEE6DABL) < 0UL)) || 0xA8L), l_25, g_35, l_36), l_25)) , g_190), 0xC37BL)), (-10L))) > g_24) ^ 65535UL))
    { 
        uint8_t l_342[2][5] = {{0x62L,0x15L,0x15L,0x62L,0xD0L},{0x62L,0x15L,0x15L,0x62L,0xD0L}};
        uint32_t l_347 = 4294967295UL;
        int i, j;
        ++l_342[0][2];
        g_90.f1.f0 = (safe_mod_func_int8_t_s_s(g_22, (((g_90.f1.f1 <= l_347) , (safe_mod_func_int8_t_s_s(l_36.f1.f0, l_29))) , 0x49L)));
    }
    else
    { 
        int16_t l_350 = 0xBD8EL;
        int32_t l_376 = 0x759944B1L;
        int32_t l_377 = 0L;
        int32_t l_378 = 1L;
        int32_t l_380 = 3L;
        int32_t l_381 = 9L;
        int32_t l_383 = (-9L);
        int32_t l_386 = 0x26E67078L;
        int32_t l_388 = 0x07DD1096L;
        uint16_t l_389 = 65535UL;
        l_29 = (l_350 ^ ((safe_div_func_int64_t_s_s((!(((safe_div_func_uint16_t_u_u((((g_341 > (safe_div_func_int32_t_s_s((-5L), g_63[0]))) && g_54[0]) , g_54[0]), g_62[0])) , l_350) < 1UL)), g_23[1][2])) , g_196[2][1]));
        if ((l_27 = l_34))
        { 
            int64_t l_361 = 1L;
            for (g_90.f2 = 0; (g_90.f2 < 6); g_90.f2++)
            { 
                l_360[0][0] &= g_28;
                if (l_361)
                    break;
            }
        }
        else
        { 
            int32_t l_362 = 0xA8108933L;
            int32_t l_373 = 0L;
            int32_t l_374 = 0L;
            int32_t l_375[4] = {3L,3L,3L,3L};
            int32_t l_382 = (-10L);
            int i;
            l_362 = g_90.f0;
            for (g_46 = 0; (g_46 <= 0); g_46 += 1)
            { 
                int i;
                g_63[g_46] = ((255UL | ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((~(safe_lshift_func_int8_t_s_s(g_62[g_46], ((safe_sub_func_int64_t_s_s(g_23[0][0], (l_36.f1.f0 &= 0L))) >= 0UL)))), g_62[0])), 3)) != g_35.f1.f0)) <= g_372);
                g_63[g_46] &= g_62[g_46];
            }
            ++l_389;
        }
    }
    return l_392;
}



static union U1  func_6(int64_t  p_7)
{ 
    int32_t l_157 = 0L;
    const union U3 l_162[5] = {{0x1C0100DBL},{0x1C0100DBL},{0x1C0100DBL},{0x1C0100DBL},{0x1C0100DBL}};
    union U1 l_177[5] = {{0x3DA2C960L},{0x3DA2C960L},{0x3DA2C960L},{0x3DA2C960L},{0x3DA2C960L}};
    int32_t l_222 = 0x2A4FE224L;
    uint8_t l_287 = 0x30L;
    struct S0 l_327 = {0L,0x21L};
    int8_t l_333 = 0x66L;
    int i;
    if ((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(l_157, ((((((safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((l_162[2] , g_90.f1.f1), (g_90 , g_90.f0))) & l_162[2].f0) , p_7), 0xD5C2L)) && l_162[2].f3) > g_21) || 3L) != p_7) , g_54[0]))) > l_162[2].f3) != 0x6A3E7E255381E528LL), p_7)), 1L)), (-4L))), l_162[2].f3)))
    { 
        int8_t l_188 = 1L;
        int32_t l_189 = 0x9DA6AA3DL;
        uint32_t l_322 = 18446744073709551615UL;
        if ((g_63[0] = (safe_div_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((((safe_unary_minus_func_int8_t_s((((!(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((g_190 = ((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((((((l_177[0] , (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_7, ((((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((l_188 = (safe_add_func_int16_t_s_s(g_90.f2, (246UL == p_7)))) , p_7) || 0x3BB4AA2B9E0A366ALL) & p_7), 0)), 0x7096A69D1A7C047CLL)) < g_90.f0) >= g_35.f1.f1) && (-9L)))), 3UL))) < 0xE524L) == 0xCE0AAE0DD45D5CCFLL) <= g_35.f0) > 0x52396328L) || g_90.f0), l_189)), p_7)) == g_35.f0)) , l_162[2].f3), p_7)), p_7)) , p_7) | l_189)) | 6L) && l_162[2].f3))) == p_7) && l_162[2].f0) ^ (-1L)), l_162[2].f0)) , 0x1AL), l_189))))
        { 
            uint32_t l_195 = 0UL;
            int32_t l_197 = 0xC1A7E2D6L;
            l_197 ^= ((l_157 &= (safe_mod_func_int32_t_s_s((((g_22 = ((((safe_lshift_func_uint8_t_u_u((g_196[3][1] = l_195), 1)) < g_23[0][2]) == p_7) || (l_189 = ((((g_54[0] = g_23[1][0]) || 0x1738L) & p_7) && g_54[0])))) == l_162[2].f3) || g_190), p_7))) && g_24);
            g_63[0] ^= (g_90.f1.f0 = ((p_7 , (g_21 ^= (((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_189 = (l_157 = (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_35.f1.f1 >= (7UL <= (safe_sub_func_uint32_t_u_u(0x94F2F5FBL, l_188)))), l_197)), p_7)))), 3)), p_7)) < l_162[2].f3) < 0x61C5L) == p_7) <= 0x71L))) == l_162[2].f0));
        }
        else
        { 
            uint32_t l_243 = 0x7B76DF01L;
            int32_t l_245[5][4][2] = {{{3L,3L},{3L,0xE8E2E917L},{3L,3L},{3L,0xE8E2E917L}},{{3L,3L},{3L,0xE8E2E917L},{3L,3L},{3L,0xE8E2E917L}},{{3L,3L},{3L,0xE8E2E917L},{3L,3L},{3L,0xE8E2E917L}},{{3L,3L},{3L,0xE8E2E917L},{3L,3L},{3L,0xE8E2E917L}},{{3L,3L},{3L,0xE8E2E917L},{3L,3L},{3L,0xE8E2E917L}}};
            const int32_t l_257[4] = {0x2AC9F6F6L,0x2AC9F6F6L,0x2AC9F6F6L,0x2AC9F6F6L};
            int64_t l_288 = 0x055BE12B37BC6C63LL;
            int32_t l_310 = 0xE086E9CFL;
            uint64_t l_311 = 5UL;
            int i, j, k;
            for (g_22 = 0; (g_22 != 18); g_22 = safe_add_func_uint8_t_u_u(g_22, 3))
            { 
                int32_t l_219[2];
                int32_t l_220[3];
                union U1 l_221 = {0x92A14779L};
                int i;
                for (i = 0; i < 2; i++)
                    l_219[i] = 0L;
                for (i = 0; i < 3; i++)
                    l_220[i] = 0x3DA7A3E4L;
                l_222 = ((((safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((l_157 = (((safe_sub_func_uint32_t_u_u(((g_62[0] & l_157) , 0x8992C6C6L), ((~(l_219[1] = ((safe_add_func_uint32_t_u_u((l_162[2].f3 | 3L), g_35.f1.f0)) == l_188))) > p_7))) & l_220[2]) ^ g_62[0])), g_62[0])) & l_189), g_196[1][0])) , l_221) , g_62[0]) || l_219[1]);
                l_189 = (safe_mul_func_int16_t_s_s((!0UL), g_63[1]));
                if (l_177[0].f0)
                    break;
            }
            if ((1UL > (safe_sub_func_int16_t_s_s((0x18L >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((g_23[0][3] = (safe_sub_func_int32_t_s_s(1L, (g_28 == 0x80A88BD3L)))), l_157)), g_33))), 0xB800L))))
            { 
                union U1 l_236 = {0xA3FFF8E1L};
                int32_t l_244 = 1L;
                int8_t l_276 = 0x22L;
                g_90.f1.f0 = ((safe_mod_func_int64_t_s_s((l_236 , (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_243, 1)), ((--g_21) ^ l_244))), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((~(0xC4L ^ 0x8DL)) <= l_257[2]) ^ 1L), l_245[4][1][1])) != g_190) , 0x3CL), 0xF4L)), p_7)), 0))))), g_23[0][0])) | 0x3EF6D6D97C5BA41FLL);
                if (g_33)
                    goto lbl_289;
                l_244 = (safe_sub_func_int16_t_s_s((!((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((((p_7 < (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((p_7 && ((((safe_mul_func_int16_t_s_s((l_189 = 1L), (~(6UL && p_7)))) || 4UL) < l_162[2].f0) > 0UL)) < p_7) < l_188), 4)) && p_7), l_257[3])), l_188)) < g_196[3][1]) || 1L)) | 0UL) , l_177[0].f0), 15)), l_276)), p_7)) , l_157)), 0x0079L));
            }
            else
            { 
lbl_289:
                l_288 = (safe_lshift_func_int8_t_s_s((g_22 = g_35.f1.f0), (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((0x905E24F5L == (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((((g_54[0] > p_7) && l_287) || 0xB59948B2L), p_7)), g_54[0]))), l_287)) & 18446744073709551613UL), p_7))));
                g_63[1] = (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((0xEF24CDB69F81DA03LL < (safe_mul_func_uint8_t_u_u((p_7 >= g_35.f2), (((l_310 = (g_46++)) != l_188) != 1L)))) && 0xF1CAD828EEFBA7E3LL) && p_7), l_311)), l_245[4][2][0])), g_190)), p_7)), g_35.f0)), p_7)), 6UL)), g_35.f2));
            }
            for (g_28 = 12; (g_28 <= (-10)); g_28 = safe_sub_func_uint16_t_u_u(g_28, 6))
            { 
                uint32_t l_319 = 4294967295UL;
                if (g_21)
                    break;
                g_63[0] = (0x7F3ED9F6L <= ((!((((safe_rshift_func_uint8_t_u_u((l_162[2].f3 || g_24), (((p_7 = ((g_196[3][1]++) , g_54[0])) || g_63[1]) == l_319))) , l_319) != (-1L)) != 0x6A36L)) || 1UL));
                if (p_7)
                    break;
            }
        }
        g_63[1] = (l_322 = ((g_83 = ((p_7 != (safe_mod_func_uint64_t_u_u((l_287 || (g_54[0] == g_23[1][3])), p_7))) & 18446744073709551615UL)) > g_22));
    }
    else
    { 
        uint32_t l_332 = 0xFA1D25D3L;
        g_63[0] = ((safe_add_func_uint32_t_u_u((l_222 = (safe_add_func_int64_t_s_s((l_327 , ((((safe_add_func_uint32_t_u_u((l_222 , (safe_add_func_int8_t_s_s(g_83, 0xA5L))), l_332)) & 0x3CCFAFCFL) == l_162[2].f3) >= l_333)), l_332))), 7UL)) & l_162[2].f3);
    }
    for (g_22 = 0; (g_22 != (-20)); --g_22)
    { 
        uint8_t l_336[5];
        int i;
        for (i = 0; i < 5; i++)
            l_336[i] = 0xC6L;
        if (g_22)
            break;
        l_336[1]--;
    }
    l_222 |= (l_333 > (safe_div_func_uint32_t_u_u(((l_327.f0 >= (l_157 != 0UL)) || g_54[0]), p_7)));
    return g_35;
}



static int64_t  func_8(union U5  p_9, int8_t  p_10)
{ 
    int8_t l_146[4][3][1] = {{{(-1L)},{0xCDL},{0L}},{{0L},{0xCDL},{(-1L)}},{{0xCDL},{0L},{0L}},{{0xCDL},{(-1L)},{0xCDL}}};
    int i, j, k;
    l_146[3][0][0] = g_35.f1.f0;
    return g_22;
}



static union U5  func_11(int8_t  p_12, int32_t  p_13, union U1  p_14, union U5  p_15)
{ 
    int32_t l_51 = 0L;
    uint32_t l_123 = 18446744073709551615UL;
    int32_t l_126 = 0x9B5E22BCL;
    int32_t l_132 = 0xD0C8DCDBL;
    int32_t l_133[5] = {0L,0L,0L,0L,0L};
    int8_t l_142 = 1L;
    uint16_t l_143 = 65535UL;
    int i;
    if (g_35.f0)
    { 
        uint32_t l_41 = 0x6AE69ED9L;
        l_41 = ((safe_rshift_func_uint16_t_u_s(0x2B9CL, 10)) , (3L ^ (safe_sub_func_uint16_t_u_u(g_28, g_22))));
        for (g_35.f2 = 0; (g_35.f2 > 26); g_35.f2 = safe_add_func_uint64_t_u_u(g_35.f2, 1))
        { 
            uint64_t l_53 = 0xFEA27655505F459CLL;
            for (g_28 = (-30); (g_28 == 15); g_28 = safe_add_func_int64_t_s_s(g_28, 1))
            { 
                uint32_t l_52 = 0x1843AD33L;
                --g_46;
                g_54[0] ^= ((l_53 = (((safe_lshift_func_int8_t_s_u(((0xAEA1L != (l_51 || ((1UL && ((p_14.f0 != g_33) & 0x36BBBD28A2181788LL)) == 1UL))) >= g_23[0][0]), p_14.f0)) ^ g_35.f1.f0) , l_52)) <= 1L);
                p_15.f1.f0 = (safe_lshift_func_int8_t_s_u((l_52 > g_46), p_15.f1.f1));
            }
            if (l_51)
                continue;
        }
        g_63[0] = (((safe_div_func_uint16_t_u_u(0x3C9EL, (safe_unary_minus_func_uint16_t_u(((((safe_sub_func_uint8_t_u_u((g_62[0] ^= 0xD1L), 0L)) <= 0x8D209D081799B58ELL) < l_41) || 0xB9L))))) < l_51) | (-7L));
    }
    else
    { 
        int8_t l_75[3][4][1];
        union U3 l_122[3][1][4] = {{{{0x40699D30L},{0xA40266A5L},{0x40699D30L},{0xA40266A5L}}},{{{0x40699D30L},{0xA40266A5L},{0x40699D30L},{0xA40266A5L}}},{{{0x40699D30L},{0xA40266A5L},{0x40699D30L},{0xA40266A5L}}}};
        int32_t l_125 = 0x6E869CBCL;
        int32_t l_129 = 0x4B4E95A6L;
        int32_t l_130 = 0x96AC18B0L;
        int32_t l_131 = (-1L);
        int32_t l_135 = (-6L);
        int32_t l_136[4];
        int16_t l_138 = (-9L);
        uint8_t l_139 = 255UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_75[i][j][k] = 0x88L;
            }
        }
        for (i = 0; i < 4; i++)
            l_136[i] = 0x57454CDDL;
        l_75[0][2][0] = (l_51 = ((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(p_15.f1.f1, 4)) ^ p_14.f0), ((safe_div_func_int16_t_s_s(((g_33 > ((safe_lshift_func_uint16_t_u_s((+0x297315BBL), g_63[0])) & 0x08L)) ^ l_51), p_15.f0)) , 1UL))), g_35.f0)) | p_14.f0));
        for (g_35.f2 = 0; (g_35.f2 <= 23); g_35.f2++)
        { 
            uint16_t l_82 = 1UL;
            union U1 l_85[4] = {{-1L},{-1L},{-1L},{-1L}};
            union U4 l_102 = {{1L,0xD5L}};
            int32_t l_127 = 0xC46DEB76L;
            int32_t l_128 = 0x7B54E5BAL;
            int32_t l_134 = 2L;
            int32_t l_137[4];
            int i;
            for (i = 0; i < 4; i++)
                l_137[i] = 1L;
            if (((safe_mod_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((l_75[0][2][0] & 0xBC018302A6F41126LL), ((g_35.f1.f1 < (g_83 &= (l_82 , l_75[0][2][0]))) ^ g_28))) >= 0x2B02L), 0x4A9589AB98CFE46DLL)) , g_62[0]))
            { 
                return p_15;
            }
            else
            { 
                uint16_t l_91 = 0x01B5L;
                p_15.f1.f0 = ((((((+l_82) <= ((l_85[0] , ((((((safe_add_func_uint16_t_u_u(((g_83 |= ((g_63[0] = (safe_rshift_func_int16_t_s_s(0xD2F7L, (g_90 , g_24)))) < 0xE62B9925L)) && g_35.f0), g_54[0])) ^ l_75[0][2][0]) <= p_13) ^ l_75[0][2][0]) , l_91) >= g_23[0][0])) == g_90.f1.f1)) && p_15.f0) >= p_15.f0) || p_15.f0) > 0xD683588DL);
                g_63[0] = p_12;
            }
            for (g_46 = 9; (g_46 >= 31); g_46 = safe_add_func_uint32_t_u_u(g_46, 2))
            { 
                uint64_t l_105 = 18446744073709551615UL;
                int32_t l_124 = 4L;
                g_63[0] ^= ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(g_35.f1.f0, (((l_105 ^= (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((l_102 , (((p_15.f1.f1 | (safe_lshift_func_int16_t_s_s((((-5L) != 0UL) || g_90.f1.f1), l_51))) <= 0L) , 0x7FL)), g_23[0][0])), g_62[0]))) && l_82) | p_12))) | g_90.f0), p_15.f1.f0)) && g_24);
                l_51 ^= (l_102.f0.f0 = (g_83 , ((safe_add_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((!(0xE0FCL == (safe_div_func_uint16_t_u_u(((l_125 ^= (((p_15.f2 < (g_90.f1.f0 |= (((safe_rshift_func_int16_t_s_s((+(((g_28 = (((safe_sub_func_int16_t_s_s((l_122[0][0][3] , p_13), l_122[0][0][3].f3)) > l_123) , l_102.f0.f1)) , 0x2BC1C087L) , (-1L))), 2)) <= p_15.f2) | p_15.f1.f1))) || l_124) > 0L)) <= 0x9F28L), l_124)))) >= l_75[2][3][0]), 0x35431FA81E3AF264LL)), 0L)), g_63[1])) <= g_63[0]), p_15.f0)) , 0L)));
            }
            l_139++;
        }
    }
    g_90.f1.f0 = (-1L);
    l_143++;
    return g_90;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1.f0, "g_35.f1.f0", print_hash_value);
    transparent_crc(g_35.f1.f1, "g_35.f1.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_196[i][j], "g_196[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
