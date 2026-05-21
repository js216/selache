// SPDX-License-Identifier: MIT
// cctest_csmith_08d2fc82.c --- cctest case csmith_08d2fc82 (csmith seed 148044930)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5f7d9e46 */

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

// Options:   -s 148044930 -o /tmp/csmith_gen_mjlzs9xj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint8_t  f1;
   struct S0  f2;
   struct S0  f3;
   uint8_t  f4;
};

union U2 {
   int32_t  f0;
   const uint16_t  f1;
   const int8_t  f2;
   uint32_t  f3;
   const struct S0  f4;
};


static int32_t g_2[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_6 = 0L;
static int32_t g_7[1][2] = {{0x05B8B78AL,0x05B8B78AL}};
static int32_t g_9 = 0x4309642EL;
static int32_t g_11[3] = {0xC51978E6L,0xC51978E6L,0xC51978E6L};
static uint32_t g_34 = 0xCEDE6A6BL;
static uint16_t g_55 = 0x3F2CL;
static int32_t *g_67 = (void*)0;
static uint8_t g_78 = 0xD6L;
static uint64_t g_79 = 18446744073709551615UL;
static const uint32_t *g_83 = (void*)0;
static const uint32_t **g_82 = &g_83;
static int32_t **g_86[3] = {&g_67,&g_67,&g_67};
static union U2 g_101 = {2L};
static union U1 g_102 = {0xFC99DC51L};
static uint8_t g_112 = 0x94L;
static uint8_t g_114 = 0xC9L;
static int32_t *g_115 = (void*)0;
static int16_t g_174 = 0x7B65L;
static uint32_t *g_176[1][4][3] = {{{&g_34,&g_34,&g_34},{&g_34,&g_34,&g_34},{&g_34,&g_34,&g_34},{&g_34,&g_34,&g_34}}};
static int8_t g_218 = 0x00L;
static uint8_t *g_225 = &g_78;
static int32_t g_232 = 1L;
static union U1 *g_247 = &g_102;
static union U1 **g_246[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 ***g_245[6][5] = {{&g_246[3],&g_246[1],&g_246[3],&g_246[1],&g_246[3]},{&g_246[3],(void*)0,&g_246[3],&g_246[3],&g_246[3]},{&g_246[3],&g_246[3],&g_246[3],&g_246[3],&g_246[1]},{&g_246[3],&g_246[3],&g_246[3],&g_246[3],(void*)0},{&g_246[0],&g_246[3],&g_246[3],&g_246[3],&g_246[3]},{(void*)0,&g_246[3],&g_246[5],&g_246[3],&g_246[3]}};
static uint16_t g_262 = 0UL;
static uint64_t g_352[1] = {18446744073709551607UL};
static int8_t **g_361 = (void*)0;
static int32_t g_372 = 0x024034E1L;
static union U1 g_377 = {-1L};
static uint32_t **g_384 = &g_176[0][0][1];
static int64_t g_396 = 0x993F85633E876B56LL;
static int32_t g_399 = 0x718F5762L;
static struct S0 g_494 = {0x43FBEE75L,0xF0839000L};
static uint32_t g_594 = 0x80121D18L;
static int32_t g_606 = (-6L);
static uint8_t g_639 = 4UL;
static int64_t *g_644 = &g_396;
static struct S0 *g_697 = &g_494;
static struct S0 **g_696 = &g_697;
static uint16_t *g_742 = &g_262;
static int16_t g_743 = 0x9D11L;
static int8_t g_759[4] = {(-7L),(-7L),(-7L),(-7L)};
static int32_t g_795 = 0x33724ABAL;
static int32_t *g_895 = &g_9;
static int64_t g_906 = 0x766E74B311A37F44LL;
static int8_t * const *g_953 = (void*)0;
static int8_t * const **g_952 = &g_953;
static int8_t * const *** const g_951 = &g_952;
static int8_t ***g_957 = &g_361;
static int8_t ****g_956[1] = {&g_957};
static int8_t *g_1125 = &g_759[2];
static int8_t **g_1124 = &g_1125;
static int8_t ** const *g_1219 = &g_1124;
static int8_t ** const **g_1218 = &g_1219;
static const int16_t *g_1221 = &g_743;
static const int16_t **g_1220[6] = {&g_1221,&g_1221,&g_1221,&g_1221,&g_1221,&g_1221};
static uint8_t g_1270 = 0xDBL;
static uint64_t g_1292[4] = {0x128DF34F4FABFB1DLL,0x128DF34F4FABFB1DLL,0x128DF34F4FABFB1DLL,0x128DF34F4FABFB1DLL};
static int32_t g_1338[4] = {1L,1L,1L,1L};



static uint32_t  func_1(void);
static uint32_t  func_12(uint32_t  p_13, int8_t  p_14);
static uint8_t  func_15(uint32_t  p_16, int32_t * p_17);
static const struct S0  func_18(int8_t  p_19, union U1  p_20);
static int32_t  func_24(const union U2  p_25, int32_t  p_26, int32_t * const  p_27, int32_t * p_28);
static union U2  func_30(uint16_t  p_31);
static union U1  func_47(uint8_t  p_48, struct S0  p_49, int32_t  p_50, int32_t * p_51);
static int32_t  func_58(uint64_t  p_59, uint8_t  p_60, int32_t  p_61);




static uint32_t  func_1(void)
{ 
    uint32_t l_10[3][4][3] = {{{0UL,0x3A4D1B40L,0x0B28787DL},{18446744073709551615UL,18446744073709551614UL,0x0B28787DL},{0x0B28787DL,0x11914CC5L,0UL},{18446744073709551615UL,0x11914CC5L,18446744073709551615UL}},{{0UL,18446744073709551614UL,0UL},{0UL,0x3A4D1B40L,0x0B28787DL},{18446744073709551615UL,18446744073709551614UL,0x0B28787DL},{0x0B28787DL,0x11914CC5L,0UL}},{{18446744073709551615UL,0x11914CC5L,18446744073709551615UL},{0UL,18446744073709551614UL,0UL},{0UL,0x3A4D1B40L,0x0B28787DL},{18446744073709551615UL,18446744073709551614UL,0x0B28787DL}}};
    int32_t l_444[2];
    uint32_t l_717[2];
    uint32_t **l_719 = (void*)0;
    int8_t **l_725 = (void*)0;
    union U1 l_793[5][7] = {{{-1L},{1L},{1L},{-1L},{0x045FF7ECL},{7L},{-4L}},{{7L},{1L},{-1L},{0xECF9A76FL},{0xC09AAA83L},{0x045FF7ECL},{8L}},{{-4L},{0x2608ABDCL},{7L},{-1L},{7L},{0x2608ABDCL},{-4L}},{{-2L},{-1L},{0x2608ABDCL},{8L},{7L},{0x68C9C30FL},{1L}},{{0x759F0B59L},{0x68C9C30FL},{0xECF9A76FL},{7L},{0xC09AAA83L},{0xC09AAA83L},{7L}}};
    int16_t *l_820[4] = {&g_174,&g_174,&g_174,&g_174};
    int16_t l_837 = 0xF868L;
    int32_t l_838 = 0xA672BA01L;
    uint32_t l_854[4][5] = {{0UL,0UL,0x991FAC67L,0x991FAC67L,0UL},{0UL,0xE342C8F6L,0UL,0UL,0x991FAC67L},{1UL,0UL,0xBCF94BF5L,0UL,1UL},{0UL,0x4D3B991CL,0xE342C8F6L,0x991FAC67L,0x4D3B991CL}};
    uint32_t l_896[6][4][2] = {{{9UL,0x5558B94EL},{4294967289UL,0UL},{4294967295UL,0xFDBDDD91L},{0x3D45A096L,0x3D45A096L}},{{0x7F7C191FL,4294967295UL},{0x5558B94EL,4294967295UL},{0xCF10CEB6L,1UL},{4294967295UL,0xCF10CEB6L}},{{0x6C147B9DL,4294967293UL},{0x6C147B9DL,0xCF10CEB6L},{4294967295UL,1UL},{0xCF10CEB6L,4294967295UL}},{{0x5558B94EL,4294967295UL},{0x7F7C191FL,0x3D45A096L},{0x3D45A096L,0xFDBDDD91L},{4294967295UL,0UL}},{{4294967289UL,0x5558B94EL},{9UL,0xC4052274L},{4294967295UL,0xC4052274L},{9UL,0x5558B94EL}},{{4294967289UL,0UL},{4294967295UL,0xFDBDDD91L},{0x3D45A096L,0x3D45A096L},{0x7F7C191FL,4294967295UL}}};
    uint64_t l_910[5];
    int64_t l_923 = 1L;
    uint64_t l_925 = 0xD8D9E1FA8E2CA9F1LL;
    int8_t l_926 = 0x5FL;
    int8_t ***l_955 = &l_725;
    int8_t ****l_954[3];
    struct S0 **l_966 = &g_697;
    int32_t *l_969 = &l_793[0][0].f0;
    union U1 **l_977 = &g_247;
    int32_t **l_983 = &g_115;
    uint32_t l_994 = 0x5AEB1EE1L;
    uint16_t l_1035[1][7] = {{2UL,0x47BAL,0x47BAL,2UL,0x47BAL,0x47BAL,2UL}};
    uint32_t l_1048 = 0x22677551L;
    uint64_t l_1073[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    uint16_t l_1098 = 0x59E2L;
    uint8_t l_1140 = 0x89L;
    uint16_t l_1154 = 0x2373L;
    uint32_t l_1249 = 0x8ADBF8FEL;
    uint16_t l_1267 = 65529UL;
    int8_t l_1339 = 0x2CL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_444[i] = 0x46C42F09L;
    for (i = 0; i < 2; i++)
        l_717[i] = 18446744073709551606UL;
    for (i = 0; i < 5; i++)
        l_910[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_954[i] = &l_955;
    for (g_2[6] = 0; (g_2[6] == 27); g_2[6] = safe_add_func_int32_t_s_s(g_2[6], 6))
    { 
        uint64_t l_5[7][5] = {{0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL,0x214A9BACDE9E8436LL,0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL},{0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL,0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL},{0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL,0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL},{0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL,0x214A9BACDE9E8436LL,0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL},{0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL,0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL},{0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL,0x6F8C7B5C6EFF3DE0LL,0x697E780CA9F8D19CLL,0x6F8C7B5C6EFF3DE0LL},{0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL,0x214A9BACDE9E8436LL,0x697E780CA9F8D19CLL,0x697E780CA9F8D19CLL}};
        union U1 l_22 = {4L};
        struct S0 l_727 = {-3L,4294967295UL};
        uint16_t *l_738 = &g_55;
        uint16_t **l_739 = (void*)0;
        uint16_t *l_741 = &g_262;
        uint16_t **l_740[2];
        int32_t *l_745[1][7];
        uint32_t ***l_754 = &g_384;
        int8_t l_770 = 0L;
        union U1 l_830 = {0x3197EB1FL};
        int32_t l_834 = 0xB5A3AF47L;
        uint32_t l_842 = 0x68FBF081L;
        int32_t l_897 = (-7L);
        uint16_t l_929[7][4] = {{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL}};
        union U2 l_938 = {6L};
        int8_t ** const *l_939 = &l_725;
        int8_t *l_944 = &l_770;
        int16_t l_945[6];
        int i, j;
        for (i = 0; i < 2; i++)
            l_740[i] = &l_741;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_745[i][j] = (void*)0;
        }
        for (i = 0; i < 6; i++)
            l_945[i] = 0x1D9CL;
        for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
        { 
            uint16_t l_703 = 65535UL;
            int8_t *l_724 = &g_218;
            int8_t **l_723[4];
            struct S0 l_728 = {8L,0x7D470638L};
            int i;
            for (i = 0; i < 4; i++)
                l_723[i] = &l_724;
            for (g_7[0][0] = 3; (g_7[0][0] >= 1); g_7[0][0] -= 1)
            { 
                int32_t *l_8 = &g_9;
                (*l_8) &= l_5[0][3];
                return l_10[1][2][1];
            }
            for (g_9 = 4; (g_9 >= 0); g_9 -= 1)
            { 
                uint32_t l_443 = 4294967286UL;
                int16_t l_718 = (-3L);
                for (g_11[0] = 0; (g_11[0] <= 4); g_11[0] += 1)
                { 
                    int64_t l_701 = 0L;
                    int32_t *l_702[4] = {&g_377.f2.f0,&g_377.f2.f0,&g_377.f2.f0,&g_377.f2.f0};
                    int i;
                }
            }
            l_728 = l_727;
            if (l_728.f1)
                break;
        }
        if ((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((+(safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(((g_174 || (l_22.f4 , (0x4372D476L & (l_738 != (g_742 = &g_55))))) > ((((g_743 = 1L) || (((((void*)0 == &g_246[3]) == (*g_225)) <= l_727.f0) | g_78)) || g_494.f0) > (**g_384))), 4)) == l_5[0][1]) > l_22.f4), 1))) , l_5[6][4]), l_717[0])), 0x36L)))
        { 
            int32_t **l_744[5] = {&g_115,&g_115,&g_115,&g_115,&g_115};
            union U1 ***l_753[7][3] = {{&g_246[6],&g_246[3],&g_246[3]},{&g_246[3],&g_246[6],&g_246[3]},{&g_246[3],&g_246[6],&g_246[6]},{&g_246[6],&g_246[3],&g_246[3]},{&g_246[6],&g_246[3],&g_246[3]},{&g_246[3],&g_246[6],&g_246[2]},{&g_246[6],&g_246[6],&g_246[2]}};
            int32_t *l_776[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_776[i] = &l_22.f2.f0;
            l_745[0][3] = (void*)0;
            if (l_444[1])
            { 
                uint64_t *l_748 = &g_352[0];
                uint8_t l_751 = 5UL;
                union U1 ***l_752 = &g_246[1];
                l_751 = (safe_div_func_int16_t_s_s((((*l_748) |= g_101.f2) || 2L), (safe_rshift_func_uint8_t_u_s(0x66L, 4))));
                l_444[0] |= (l_752 != l_753[5][0]);
                if (l_751)
                    continue;
            }
            else
            { 
                int16_t *l_755 = &g_743;
                const int32_t l_756[4] = {0x9FCAD25CL,0x9FCAD25CL,0x9FCAD25CL,0x9FCAD25CL};
                int32_t *l_757 = &g_11[0];
                int16_t *l_758[7][1] = {{&g_174},{(void*)0},{&g_174},{&g_174},{(void*)0},{&g_174},{&g_174}};
                int32_t l_772[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_772[i] = 0x6F131D4EL;
                g_759[0] |= ((((*l_755) = (l_754 == (void*)0)) < (l_717[0] , (g_174 &= ((func_47((l_756[0] | (**g_384)), l_727, l_756[1], l_757) , (*l_757)) | 0x32777201L)))) < (*l_757));
                if ((safe_div_func_int8_t_s_s((l_10[2][2][2] , (0xF42FCB1B8D3284D1LL != ((safe_div_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((0x86L | (251UL <= (safe_lshift_func_int16_t_s_s((-1L), g_377.f1)))) < (safe_div_func_int64_t_s_s((*l_757), 0x62B35DBF721CE101LL))), 0xC881L)) >= g_743) != (**g_384)), g_232)) >= l_770))), (*g_225))))
                { 
                    int32_t *l_771 = &g_7[0][0];
                    l_745[0][2] = l_771;
                    return g_743;
                }
                else
                { 
                    uint16_t l_773 = 0x6282L;
                    --l_773;
                    if (l_444[0])
                        continue;
                    return g_11[1];
                }
            }
            l_776[4] = l_745[0][0];
        }
        else
        { 
            uint32_t l_777 = 0x80161BAEL;
            l_777++;
        }
    }
    (**l_966) = func_18(((*g_644) , (safe_lshift_func_uint8_t_u_u(((*g_225) &= (safe_unary_minus_func_int32_t_s(((*l_969) = (safe_sub_func_int8_t_s_s(((g_951 == (g_956[0] = l_954[1])) >= (l_717[0] , (2UL && (safe_mul_func_uint16_t_u_u((((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_966 == (((*g_895) = (((safe_add_func_int32_t_s_s((*g_895), 0x7A95C1C2L)) != (-5L)) || 252UL)) , l_966)), 0xD3823F3DL)), 0x4E8DL)), 0x00L)) && l_717[0]) && 4294967295UL) && 6UL) != l_717[0]), l_793[0][0].f0))))), 0UL)))))), l_854[2][3]))), (*g_247));
    for (g_232 = 0; (g_232 >= 7); g_232 = safe_add_func_uint64_t_u_u(g_232, 6))
    { 
        int64_t l_976 = 0x760685DE53AB7DECLL;
        int32_t **l_982 = &g_67;
        uint64_t l_1011 = 0xD4C2FBAAC540303ELL;
        uint32_t l_1027 = 0x501F9023L;
        int32_t l_1031 = 1L;
        int32_t l_1034 = 0x9F4D72F5L;
        uint64_t l_1038 = 0UL;
        uint32_t l_1099 = 0x5D500481L;
        union U1 l_1157 = {-1L};
        int8_t l_1187[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        int8_t ** const *l_1217 = (void*)0;
        int8_t ** const **l_1216 = &l_1217;
        struct S0 *l_1259 = &g_494;
        int16_t l_1263 = 6L;
        uint32_t ***l_1290[6] = {&g_384,&g_384,&g_384,&g_384,&g_384,&g_384};
        uint32_t l_1291 = 1UL;
        int i;
    }
    return g_494.f1;
}



static uint32_t  func_12(uint32_t  p_13, int8_t  p_14)
{ 
    int32_t l_451 = (-1L);
    uint32_t **l_458 = &g_176[0][0][1];
    uint32_t ***l_457 = &l_458;
    uint32_t **l_459 = &g_176[0][1][0];
    int16_t *l_460 = (void*)0;
    int16_t *l_461 = &g_174;
    int32_t l_462 = 0x245FFAC2L;
    union U1 **l_466 = &g_247;
    struct S0 l_508[7][3] = {{{1L,2UL},{0xF30C6FA1L,0xA678845AL},{1L,2UL}},{{-1L,0UL},{-1L,0UL},{-1L,0UL}},{{1L,2UL},{0xF30C6FA1L,0xA678845AL},{1L,2UL}},{{-1L,0UL},{-1L,0UL},{-1L,0UL}},{{1L,2UL},{0xF30C6FA1L,0xA678845AL},{1L,2UL}},{{-1L,0UL},{-1L,0UL},{-1L,0UL}},{{1L,2UL},{0xF30C6FA1L,0xA678845AL},{1L,2UL}}};
    struct S0 *l_512 = &g_494;
    int8_t ***l_519 = (void*)0;
    int8_t l_524 = 0x03L;
    int32_t l_607 = 1L;
    int32_t l_608 = 8L;
    int32_t l_609[6] = {0xB1A7CE73L,0xD90719AEL,0xB1A7CE73L,0xB1A7CE73L,0xD90719AEL,0xB1A7CE73L};
    int64_t *l_645 = &g_396;
    uint16_t l_686[4] = {2UL,2UL,2UL,2UL};
    int i, j;
    if ((l_462 = ((0x0121A118L < (safe_add_func_int32_t_s_s((((((*l_461) &= ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_451 >= (~0xC2DF61CFCEFBEB51LL)), (safe_mul_func_int8_t_s_s(l_451, p_13)))), ((**g_384) = 0x557AD91CL))) ^ (safe_rshift_func_int16_t_s_s((((*l_457) = &g_176[0][0][1]) == l_459), 5)))) || g_11[1]) | (*g_225)) == p_14), p_13))) & l_451)))
    { 
        int32_t l_476 = 0xB53DCB27L;
        uint8_t l_482 = 0x14L;
        union U1 l_496 = {0x53A00626L};
        struct S0 *l_556 = &l_508[2][0];
        int32_t l_572[5];
        int32_t *l_573[7][6] = {{&l_476,&l_476,(void*)0,&l_462,&l_462,(void*)0},{&l_462,&l_462,(void*)0,&l_462,&l_462,(void*)0},{&l_462,&l_462,(void*)0,&l_476,&l_476,(void*)0},{&l_476,&l_476,(void*)0,&l_462,&l_462,(void*)0},{&l_462,&l_462,(void*)0,&l_462,&l_462,(void*)0},{&l_462,&l_462,(void*)0,&l_476,&l_476,(void*)0},{&l_476,&l_476,(void*)0,&g_7[0][0],&l_496.f0,&l_476}};
        int16_t l_574 = (-1L);
        int i, j;
        for (i = 0; i < 5; i++)
            l_572[i] = 5L;
        for (g_377.f3.f0 = (-12); (g_377.f3.f0 >= 6); g_377.f3.f0 = safe_add_func_int8_t_s_s(g_377.f3.f0, 5))
        { 
            union U1 **l_465 = &g_247;
            int32_t l_467 = 0x579546B7L;
            int32_t l_495 = 0xC853D430L;
            int32_t l_543 = 0x08C305E5L;
            l_466 = l_465;
            if (l_467)
                continue;
            for (g_262 = 0; (g_262 > 57); g_262++)
            { 
                int32_t l_479 = (-3L);
                int32_t *l_480 = &g_2[6];
                union U1 * const *l_493 = &g_247;
                struct S0 *l_510 = &l_508[6][0];
                int32_t l_541 = (-7L);
                int32_t l_542 = 0x1B757EA8L;
                uint8_t l_544 = 0UL;
                if (l_451)
                { 
                    int32_t l_477 = 5L;
                    int32_t *l_478 = &l_462;
                    (*l_478) = ((g_102.f4 <= ((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((((safe_div_func_int16_t_s_s(((((((l_476 != ((*l_459) != (void*)0)) & ((l_462 , g_352[0]) == p_13)) | (*g_225)) != 0UL) | 8UL) != g_352[0]), g_262)) | g_377.f0) && l_476) <= l_477), g_101.f0)), 0xD446L)) & 3UL)) , p_14);
                    return l_479;
                }
                else
                { 
                    int32_t **l_481 = &g_67;
                    (*l_481) = l_480;
                    if ((**l_481))
                        continue;
                }
                if ((l_482 < (safe_rshift_func_int16_t_s_u((((g_372 || (7UL | (((**l_459) = 0xCFADAD94L) ^ ((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_493 == l_466), (g_494 , l_462))) <= l_467) , g_79), g_101.f2)), l_451)), g_377.f4)) , l_467)))) <= (*g_225)) , l_495), 14))))
                { 
                    uint8_t l_505 = 0x73L;
                    int32_t l_509[2][4];
                    struct S0 **l_511[2];
                    int8_t ***l_521 = &g_361;
                    int8_t ****l_520 = &l_521;
                    int32_t *l_525 = (void*)0;
                    int32_t *l_526 = &l_509[1][3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_509[i][j] = 0L;
                    }
                    for (i = 0; i < 2; i++)
                        l_511[i] = &l_510;
                    l_509[1][3] = (func_47((0x5EB21875311A9E63LL >= (l_496 , (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(0x22E9L, g_232)), l_505)), (safe_lshift_func_uint8_t_u_u((p_14 & (g_352[0] , p_13)), (*l_480))))), (*g_225))))), l_508[6][0], l_495, &l_476) , l_467);
                    if (l_505)
                        break;
                    l_512 = l_510;
                    (*l_526) = ((l_524 = (((safe_sub_func_uint16_t_u_u((1L == 3L), l_476)) , (safe_mul_func_uint16_t_u_u((p_14 , (safe_mod_func_uint64_t_u_u(((l_519 == ((*l_520) = l_519)) , ((safe_div_func_uint16_t_u_u(((void*)0 == &g_55), l_496.f1)) | 0x87EBL)), g_377.f0))), (-1L)))) >= g_101.f0)) , 0xADA71F99L);
                    l_467 &= (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(l_476)), l_508[6][0].f0));
                }
                else
                { 
                    return p_13;
                }
                for (g_174 = 0; (g_174 <= (-29)); g_174 = safe_sub_func_uint8_t_u_u(g_174, 4))
                { 
                    int32_t *l_532 = &g_102.f0;
                    int32_t l_533 = 1L;
                    int32_t *l_534 = &l_462;
                    int32_t *l_535 = &g_7[0][0];
                    int32_t *l_536 = &g_102.f0;
                    int32_t *l_537 = &l_533;
                    int32_t *l_538 = &g_7[0][1];
                    int32_t *l_539 = &l_467;
                    int32_t *l_540[7] = {&g_102.f2.f0,&g_102.f2.f0,&g_102.f2.f0,&g_102.f2.f0,&g_102.f2.f0,&g_102.f2.f0,&g_102.f2.f0};
                    uint8_t *l_557 = &g_102.f4;
                    int8_t *l_558 = &g_218;
                    int i;
                    l_544--;
                    if (p_13)
                        break;
                    l_476 |= (((*l_558) ^= (!((((*g_225) = (safe_lshift_func_uint8_t_u_u(((func_47(((l_508[6][0].f1 , (l_462 && (safe_lshift_func_int16_t_s_u((&g_494 != (((safe_mul_func_uint8_t_u_u((l_496.f0 & (safe_sub_func_int32_t_s_s(0xC65D68EAL, (*l_480)))), (l_467 != g_34))) && l_495) , l_556)), g_114)))) == (*l_480)), g_494, l_495, &l_542) , l_557) != (void*)0), 0))) , (**g_384)) > p_14))) ^ p_14);
                    (*l_538) |= 0x1C5A37F8L;
                }
            }
            for (l_496.f2.f0 = 0; (l_496.f2.f0 < 9); l_496.f2.f0 = safe_add_func_int8_t_s_s(l_496.f2.f0, 6))
            { 
                int32_t **l_561 = (void*)0;
                int32_t **l_562 = &g_67;
                (*l_562) = &l_543;
            }
        }
        l_574 |= (safe_div_func_uint8_t_u_u((*g_225), (safe_sub_func_int32_t_s_s(((((p_13 , (((+(p_14 || ((safe_lshift_func_uint8_t_u_u(l_496.f4, 3)) == (l_524 | (((safe_lshift_func_uint16_t_u_u(0UL, 14)) , 5UL) ^ l_572[4]))))) >= 0UL) > l_572[3])) ^ l_524) , 0x0E81EAC1L) != p_13), p_13))));
    }
    else
    { 
        uint32_t l_584[6][3] = {{0x6B1123DBL,0xEB9C04E9L,0x6B1123DBL},{18446744073709551615UL,4UL,4UL},{0xC0008E94L,0xEB9C04E9L,0xC0008E94L},{18446744073709551615UL,18446744073709551615UL,4UL},{0x6B1123DBL,0xEB9C04E9L,0x6B1123DBL},{18446744073709551615UL,4UL,4UL}};
        union U1 l_596[5][6] = {{{9L},{-4L},{-4L},{9L},{-4L},{-4L}},{{9L},{-4L},{-4L},{9L},{-4L},{-4L}},{{9L},{-4L},{-4L},{9L},{-4L},{-4L}},{{9L},{-4L},{-4L},{9L},{-4L},{-4L}},{{9L},{-4L},{-4L},{9L},{-4L},{-4L}}};
        int32_t l_600 = 0xE7546837L;
        int32_t l_610 = 0x6986A1DDL;
        int32_t l_611 = (-8L);
        int i, j;
        if (p_13)
        { 
            int8_t *l_579[1][2][1];
            int32_t l_580 = 0xE405996BL;
            int32_t *l_583[2];
            union U1 *l_593 = (void*)0;
            uint16_t l_612 = 65526UL;
            int64_t l_660 = 0x15F17FE9A05F62B4LL;
            int16_t l_662 = 0x9C83L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_579[i][j][k] = &g_218;
                }
            }
            for (i = 0; i < 2; i++)
                l_583[i] = (void*)0;
lbl_685:
            if (((l_584[3][1] = (!((**l_458) |= ((l_580 = (safe_lshift_func_uint16_t_u_s(((void*)0 == &g_396), (l_508[6][0].f0 ^ (+l_524))))) < (++(*g_225)))))) >= ((p_14 == (((safe_lshift_func_int8_t_s_u(((&l_459 != (void*)0) || l_462), l_508[6][0].f1)) || g_9) < 0xC898L)) == g_102.f1)))
            { 
                int64_t l_595 = 0xD22C9B9D7CA3E4B4LL;
                union U1 *l_597 = &g_377;
                int32_t l_598 = 1L;
                uint64_t l_599 = 0xCB21DE5B2CDF6974LL;
                int32_t l_605[5] = {9L,9L,9L,9L,9L};
                int64_t *l_620[1][1][6] = {{{&g_396,&g_396,&g_396,&g_396,&g_396,&g_396}}};
                uint8_t *l_630 = &g_377.f1;
                int64_t l_631 = 0x28A92BA83A2EC829LL;
                int i, j, k;
                l_600 = (l_596[1][1].f0 = ((((((g_101.f0 < (g_232 || l_508[6][0].f1)) , (safe_sub_func_uint8_t_u_u((*g_225), 247UL))) >= (safe_mod_func_uint8_t_u_u(((l_593 != (((l_595 = g_594) , l_596[1][1]) , l_597)) || 0L), l_598))) , l_598) || p_13) == l_599));
                for (g_372 = 18; (g_372 > 17); g_372 = safe_sub_func_int16_t_s_s(g_372, 7))
                { 
                    int32_t l_603 = (-6L);
                    int32_t l_604[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_604[i] = 0x19C7E819L;
                    l_612--;
                    return g_2[1];
                }
                l_631 = (((**g_384) = (safe_div_func_uint64_t_u_u(((((g_396 = (+((18446744073709551615UL || (safe_div_func_int64_t_s_s((&l_609[0] == (void*)0), g_55))) >= p_13))) | ((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((((*l_630) = (safe_add_func_uint16_t_u_u(((p_14 | (safe_mul_func_uint8_t_u_u((--(*g_225)), p_14))) & p_13), 0xCCA8L))) >= l_524))), l_595)) & 0x39199F53L)) , l_593) == l_593), 1UL))) & l_524);
            }
            else
            { 
                int8_t l_637 = 0xD3L;
                int32_t l_638 = 0x1EFC6EDFL;
                int64_t *l_642[5][3][2] = {{{&g_396,(void*)0},{&g_396,(void*)0},{(void*)0,(void*)0}},{{&g_396,(void*)0},{&g_396,&g_396},{&g_396,(void*)0}},{{&g_396,(void*)0},{(void*)0,(void*)0},{&g_396,(void*)0}},{{&g_396,&g_396},{&g_396,(void*)0},{&g_396,(void*)0}},{{(void*)0,(void*)0},{&g_396,(void*)0},{&g_396,&g_396}}};
                uint64_t l_658 = 18446744073709551611UL;
                int64_t *l_661 = &l_660;
                uint32_t **l_668[5][4][2] = {{{&g_176[0][0][1],&g_176[0][0][1]},{&g_176[0][0][1],&g_176[0][0][1]},{&g_176[0][3][1],&g_176[0][3][1]},{&g_176[0][0][1],&g_176[0][0][1]}},{{(void*)0,&g_176[0][1][0]},{&g_176[0][1][0],&g_176[0][0][1]},{&g_176[0][1][2],&g_176[0][1][0]},{&g_176[0][1][1],&g_176[0][0][1]}},{{&g_176[0][1][1],&g_176[0][1][0]},{&g_176[0][1][2],&g_176[0][0][1]},{&g_176[0][1][0],&g_176[0][1][0]},{(void*)0,&g_176[0][0][1]}},{{&g_176[0][0][1],&g_176[0][3][1]},{&g_176[0][3][1],&g_176[0][0][1]},{&g_176[0][0][1],&g_176[0][0][1]},{&g_176[0][0][1],(void*)0}},{{&g_176[0][0][1],(void*)0},{&g_176[0][0][1],&g_176[0][0][1]},{&g_176[0][0][1],&g_176[0][0][1]},{&g_176[0][3][1],&g_176[0][3][1]}}};
                int i, j, k;
                for (l_611 = (-25); (l_611 == 19); l_611 = safe_add_func_uint32_t_u_u(l_611, 5))
                { 
                    uint32_t l_634 = 0xA4145603L;
                    --l_634;
                }
                l_637 |= 0xA8D7BD50L;
                for (g_218 = 2; (g_218 >= 0); g_218 -= 1)
                { 
                    int64_t **l_643[1];
                    uint16_t *l_659 = &g_55;
                    int32_t **l_663 = &l_583[0];
                    uint64_t *l_671 = &g_352[0];
                    int32_t l_680 = 0x38753949L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_643[i] = &l_642[2][0][1];
                    --g_639;
                    if (p_14)
                        break;
                    (*l_663) = ((g_2[6] ^ ((((((((l_645 = (g_644 = l_642[2][0][1])) == (l_661 = ((safe_add_func_int16_t_s_s(((*l_461) = (safe_mul_func_int8_t_s_s(0L, (l_608 = ((((((((safe_rshift_func_uint8_t_u_s(((p_13 > p_13) <= ((((safe_mul_func_uint16_t_u_u(((*l_659) = (safe_add_func_uint64_t_u_u((l_609[0] & ((safe_rshift_func_uint16_t_u_u(l_658, 2)) != 1UL)), 0xE320EE57095BA9EBLL))), l_637)) , (**g_384)) < (-9L)) ^ 0L)), 2)) & p_14) && l_637) > l_584[3][1]) <= p_13) , l_660) < p_13) & 0x4FE19A4FL))))), 0xDD2AL)) , (void*)0))) || p_14) < p_13) && l_662) | p_13) ^ 7L) & l_596[1][1].f4)) , &l_611);
                    l_638 ^= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_668[2][1][1] == l_668[2][1][1]), (safe_add_func_int32_t_s_s(((((void*)0 == g_361) ^ (++(*l_671))) ^ ((safe_sub_func_int64_t_s_s((((l_637 < (safe_add_func_uint32_t_u_u(((**l_458) ^= (((safe_mul_func_int16_t_s_s(p_13, (((p_14 ^ (-1L)) & 0xCCC2DFBFL) > 0xC1L))) | 0xE828050EL) <= l_680)), (-1L)))) == g_2[2]) , l_608), g_101.f1)) >= g_101.f0)), 0xFE6D9046L)))), (-1L)));
                }
                for (g_174 = (-25); (g_174 < (-21)); g_174 = safe_add_func_uint32_t_u_u(g_174, 3))
                { 
                    (*l_512) = g_494;
                }
                return l_609[0];
            }
            for (g_174 = 0; (g_174 == (-28)); g_174 = safe_sub_func_uint64_t_u_u(g_174, 3))
            { 
                if (g_102.f4)
                    goto lbl_685;
                l_686[2]++;
            }
        }
        else
        { 
            int32_t *l_689 = (void*)0;
            int32_t *l_690 = (void*)0;
            int32_t *l_691 = &g_102.f3.f0;
            int32_t *l_692 = &g_377.f3.f0;
            int32_t *l_693 = &g_7[0][0];
            (*l_693) &= ((*l_691) = p_13);
            for (g_102.f1 = 0; (g_102.f1 > 42); ++g_102.f1)
            { 
                struct S0 **l_698 = (void*)0;
                int32_t **l_699 = &l_689;
                int32_t **l_700 = &g_67;
                (*l_693) |= ((g_696 = &l_512) != (p_14 , l_698));
                (*l_700) = ((*l_699) = &l_462);
                if (l_608)
                    break;
            }
        }
        l_609[1] = l_584[4][1];
    }
    return p_14;
}



static uint8_t  func_15(uint32_t  p_16, int32_t * p_17)
{ 
    const int8_t l_29[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t *l_33 = &g_34;
    uint8_t *l_111 = &g_112;
    uint8_t *l_113 = &g_114;
    int32_t *l_351[3];
    int8_t *l_360 = (void*)0;
    int8_t **l_359[7] = {&l_360,&l_360,&l_360,&l_360,&l_360,&l_360,&l_360};
    union U1 * const l_375 = &g_102;
    int32_t l_379[5];
    union U1 *l_403 = &g_377;
    union U1 *l_425 = &g_102;
    int i;
    for (i = 0; i < 3; i++)
        l_351[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_379[i] = 0xDC5297C5L;
    g_352[0] ^= func_24((l_29[2] , func_30((safe_unary_minus_func_uint32_t_u(((*l_33) = l_29[3]))))), ((g_102 , (safe_sub_func_uint16_t_u_u((((1L & (safe_div_func_int8_t_s_s(0x60L, ((*l_113) |= ((*l_111) ^= (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((8L || g_101.f1) & l_29[1]) & g_102.f4), g_101.f2)), p_16))))))) , &l_33) != &l_33), l_29[0]))) < l_29[2]), &g_2[4], g_115);
    for (g_232 = 0; (g_232 <= 23); g_232++)
    { 
        uint8_t l_366 = 0UL;
        int32_t l_367 = 0x618921DCL;
        union U1 *l_376 = &g_377;
        int32_t l_388 = 0x3AF17D37L;
        uint64_t l_411 = 7UL;
        struct S0 l_417 = {0xA08D4D16L,0x4F155717L};
        l_367 ^= ((((g_34 ^ (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((l_359[2] != g_361) , p_16), ((((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_2[3] < (((0xECL >= p_16) & g_79) < 0x79D6E5CBL)), (*g_225))), 0x5210L)) == (*g_225)) > 1UL) | (*p_17)))), (*p_17)))) >= 0x4636L) != g_6) ^ l_366);
        if ((*p_17))
        { 
            int32_t *l_378[3];
            int32_t l_404 = (-5L);
            int8_t *l_409 = &g_218;
            int i;
            for (i = 0; i < 3; i++)
                l_378[i] = &g_377.f0;
            for (g_102.f1 = 0; (g_102.f1 == 35); ++g_102.f1)
            { 
                uint16_t *l_380[3];
                int32_t l_383 = 0x1FA06588L;
                uint32_t **l_386[1][5][4] = {{{(void*)0,(void*)0,&l_33,&l_33},{(void*)0,&l_33,&l_33,(void*)0},{&l_33,&l_33,&l_33,&g_176[0][3][2]},{(void*)0,(void*)0,&l_33,(void*)0},{(void*)0,&l_33,&l_33,(void*)0}}};
                uint32_t ***l_385 = &l_386[0][4][3];
                int32_t l_387 = 0x6075F629L;
                int32_t l_389 = 7L;
                union U1 *l_400 = &g_102;
                int64_t *l_410[5][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_380[i] = &g_262;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_410[i][j] = &g_396;
                }
                for (p_16 = 0; (p_16 > 25); p_16 = safe_add_func_int32_t_s_s(p_16, 6))
                { 
                    return g_372;
                }
                for (g_262 = 0; (g_262 > 10); g_262++)
                { 
                    l_376 = l_375;
                    l_378[2] = (void*)0;
                    if (l_379[1])
                        continue;
                    l_367 = 0x385FB9EFL;
                }
                if (((func_30(((((l_367 = 0xB489L) < p_16) < (safe_mod_func_int8_t_s_s(((l_383 = (0xF612F231L ^ l_383)) | (((&g_176[0][0][1] != ((*l_385) = (g_384 = &g_176[0][0][1]))) || ((void*)0 == &g_55)) == 1L)), (*g_225)))) ^ p_16)) , p_16) < p_16))
                { 
                    return (*g_225);
                }
                else
                { 
                    uint32_t l_390 = 4294967290UL;
                    int64_t *l_395[7] = {&g_396,&g_396,&g_396,&g_396,&g_396,&g_396,&g_396};
                    union U1 **l_401 = (void*)0;
                    union U1 **l_402 = &l_400;
                    int i;
                    ++l_390;
                    g_399 |= (func_30((((safe_sub_func_int16_t_s_s(((0x4F27E922CFA4028DLL || (g_396 &= l_366)) & (((safe_div_func_uint8_t_u_u(((g_232 , ((l_388 = 0xD10D6ED0L) , ((((((-9L) < l_366) > 0L) && 0x0DBBA3AC6B347893LL) | p_16) ^ 0x54AE5F48L))) ^ l_366), p_16)) , l_375) == (void*)0)), p_16)) && p_16) | l_390)) , (*p_17));
                    l_403 = ((*l_402) = l_400);
                    if ((*p_17))
                        continue;
                    l_383 = l_404;
                }
                l_411 = (0L < (((**g_384) |= 1UL) >= (safe_div_func_int64_t_s_s((((l_389 &= (safe_lshift_func_uint8_t_u_s(((l_388 = (p_16 , ((l_387 = ((8UL < ((((*g_225) , l_409) != (void*)0) != p_16)) , p_16)) ^ g_396))) != g_2[6]), p_16))) , l_380[2]) != (void*)0), l_383))));
            }
        }
        else
        { 
            int32_t **l_412 = &g_67;
            union U1 *l_426 = (void*)0;
            int32_t *l_430 = &g_7[0][0];
            (*l_412) = &l_367;
            for (l_388 = 2; (l_388 == 27); l_388 = safe_add_func_int16_t_s_s(l_388, 4))
            { 
                int32_t l_428 = 0xC1E5542DL;
                int32_t l_429 = (-1L);
                for (p_16 = (-25); (p_16 == 18); ++p_16)
                { 
                    struct S0 *l_418 = &g_102.f2;
                    int32_t l_427 = 0L;
                    union U1 l_435 = {-1L};
                    int32_t *l_441 = (void*)0;
                    int32_t **l_442 = &l_351[1];
                    (*l_418) = l_417;
                    l_429 ^= (safe_rshift_func_uint16_t_u_u(((l_427 = ((safe_rshift_func_int8_t_s_u(((*g_225) | (~((((((g_396 = (((((((~8UL) | (l_376 == (l_426 = l_425))) , func_47(l_411, func_18(p_16, (*g_247)), (**l_412), p_17)) , p_16) , l_366) && p_16) == l_388)) <= g_232) == g_2[3]) , g_101.f1) > 0x11L) <= g_262))), p_16)) , g_101.f2)) != l_428), 11));
                    (*l_412) = l_430;
                    (*l_442) = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((((void*)0 != &l_366) <= ((((((*g_247) = l_435) , (0x8730E544L && ((*l_430) = (safe_sub_func_uint16_t_u_u(0x75F3L, (((((safe_unary_minus_func_uint8_t_u(((*l_111) = ((safe_lshift_func_int16_t_s_s((((*l_412) = (void*)0) == (void*)0), g_79)) != p_16)))) >= p_16) , l_351[1]) == (void*)0) || l_435.f0)))))) ^ g_218) , l_417.f1) == g_352[0])), l_366)), 10)) , l_441);
                    return p_16;
                }
            }
            (*g_67) ^= ((*l_430) ^= (-1L));
        }
    }
    return p_16;
}



static const struct S0  func_18(int8_t  p_19, union U1  p_20)
{ 
    const struct S0 l_23 = {-1L,0UL};
    return l_23;
}



static int32_t  func_24(const union U2  p_25, int32_t  p_26, int32_t * const  p_27, int32_t * p_28)
{ 
    uint8_t l_116 = 0UL;
    int32_t l_117 = 0x42A246DCL;
    uint32_t *l_119 = &g_34;
    int32_t *l_185 = &g_102.f3.f0;
    int8_t **l_233 = (void*)0;
    uint32_t **l_236 = &g_176[0][0][1];
    uint32_t ***l_235 = &l_236;
    int32_t *l_257 = (void*)0;
    union U1 ****l_270 = (void*)0;
    int64_t l_293 = 8L;
    int8_t l_295 = 0x8FL;
    int8_t l_296 = 0x5FL;
    int32_t l_298 = 0L;
    int32_t l_300 = 0xF5DD551BL;
    int16_t l_301 = 0x9A61L;
    int32_t l_303[1];
    int8_t l_312 = 0x2DL;
    uint8_t l_316 = 0xF8L;
    int16_t l_350 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_303[i] = (-1L);
lbl_123:
    l_117 = l_116;
    for (g_112 = 0; (g_112 <= 2); g_112 += 1)
    { 
        const int32_t l_118 = 0xFE7AD20BL;
        uint16_t *l_125 = &g_55;
        uint32_t l_237[4] = {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL};
        int32_t l_241 = (-1L);
        int32_t l_297 = (-1L);
        int32_t l_299 = 0xB4A5A0E8L;
        int32_t l_302 = 0xB15DECD9L;
        int32_t l_305[7][4] = {{0L,0L,0L,0x6A9F3632L},{0x6A9F3632L,0x8DCCD0DAL,0L,0xDEC6D6CFL},{5L,0x6A9F3632L,0L,0L},{0xDEC6D6CFL,0x6A9F3632L,0x6A9F3632L,0xDEC6D6CFL},{0x6A9F3632L,0xDEC6D6CFL,5L,0x831E0D73L},{0x6A9F3632L,5L,0x6A9F3632L,0L},{0xDEC6D6CFL,0x831E0D73L,0L,0L}};
        uint32_t l_306 = 1UL;
        union U1 ****l_331 = &g_245[1][1];
        uint32_t **l_342 = &g_176[0][1][2];
        uint32_t l_347 = 0UL;
        int i, j;
        if (l_118)
        { 
            int32_t *l_120 = &l_117;
            uint16_t l_142[1];
            uint16_t l_148[4][5] = {{0x1B1CL,65528UL,0x1B1CL,65528UL,0x1B1CL},{0x8377L,2UL,2UL,0x8377L,0x8377L},{0x10CAL,65528UL,0x10CAL,65528UL,0x10CAL},{0x8377L,0x8377L,2UL,2UL,0x8377L}};
            int32_t l_150 = 0xA0861D2BL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_142[i] = 1UL;
            for (g_102.f2.f1 = 0; (g_102.f2.f1 <= 2); g_102.f2.f1 += 1)
            { 
                return l_116;
            }
            if ((*p_27))
                break;
            if (l_117)
                continue;
            if (((*l_120) &= (l_119 != (*g_82))))
            { 
                uint8_t *l_133 = (void*)0;
                int32_t l_141 = 0x3EB71C04L;
                uint8_t l_147 = 0UL;
                union U1 *l_180 = &g_102;
                struct S0 l_214 = {0x7913A047L,0xB794BE24L};
                int8_t *l_217 = &g_218;
                int32_t l_231 = 0xDD0C4F64L;
                for (g_79 = 4; (g_79 < 36); g_79++)
                { 
                    int8_t l_124 = 0x6FL;
                    uint16_t l_140 = 1UL;
                    uint32_t *l_149 = &g_102.f2.f1;
                    int16_t *l_173[2];
                    int32_t l_175 = 8L;
                    int32_t l_177[5][4][6] = {{{1L,0x13A26623L,7L,0x13A26623L,1L,0x13A26623L},{3L,0x0F5ECD5AL,3L,0x13A26623L,3L,0x0F5ECD5AL},{1L,0x0F5ECD5AL,7L,0x0F5ECD5AL,1L,0x0F5ECD5AL},{3L,0x13A26623L,3L,0x0F5ECD5AL,3L,0x13A26623L}},{{1L,0x13A26623L,7L,0x13A26623L,1L,0x13A26623L},{3L,0x0F5ECD5AL,3L,0x13A26623L,3L,0x0F5ECD5AL},{1L,0x0F5ECD5AL,7L,0x0F5ECD5AL,1L,0x0F5ECD5AL},{3L,0x13A26623L,3L,0x0F5ECD5AL,3L,0x13A26623L}},{{1L,0x13A26623L,7L,0x13A26623L,1L,0x13A26623L},{3L,0x0F5ECD5AL,3L,0x13A26623L,3L,0x0F5ECD5AL},{1L,0x0F5ECD5AL,7L,0x0F5ECD5AL,1L,0x0F5ECD5AL},{3L,0x13A26623L,3L,0x0F5ECD5AL,3L,0x13A26623L}},{{1L,0x13A26623L,7L,0x13A26623L,1L,0x13A26623L},{3L,0x0F5ECD5AL,3L,0x13A26623L,3L,0x0F5ECD5AL},{1L,0x0F5ECD5AL,7L,0x0F5ECD5AL,1L,0x0F5ECD5AL},{3L,0x13A26623L,3L,0x0F5ECD5AL,3L,0x13A26623L}},{{1L,0x13A26623L,7L,0x13A26623L,1L,0x13A26623L},{3L,0x0F5ECD5AL,3L,0x13A26623L,3L,0x0F5ECD5AL},{1L,0x0F5ECD5AL,7L,0x0F5ECD5AL,1L,0x0F5ECD5AL},{3L,0x13A26623L,3L,0x0F5ECD5AL,3L,0x13A26623L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_173[i] = &g_174;
                    if (l_118)
                        goto lbl_123;
                    if (l_124)
                        break;
                    (*l_120) &= ((l_125 != (void*)0) >= (safe_lshift_func_int8_t_s_u((!((safe_lshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s(((void*)0 != l_133), (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((g_79 != ((l_140 , l_141) <= l_142[0])), 4)), 3)), l_116)))) <= l_116), 0)) & 0xCA49896FL)), 2)));
                    l_150 = (p_26 = (l_117 = ((safe_mod_func_uint16_t_u_u(g_101.f3, ((0xAAL ^ (safe_mod_func_int8_t_s_s(l_147, 0x74L))) | ((*l_149) = ((*l_119) = l_148[2][0]))))) , (-1L))));
                    l_177[3][0][3] = (g_101 , (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((7L < (safe_lshift_func_uint16_t_u_u(((*l_120) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_116 & (((((-2L) < (((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0x273AL, ((((l_175 = (safe_mod_func_int8_t_s_s((g_11[0] || g_2[6]), l_124))) , g_176[0][0][1]) != p_28) > 0x97L))), g_55)) , 0x95L) || 3L)) & g_11[0]) < (-1L)) >= 0x45L)), 9)), (*l_120))), p_26))), 5))) != g_9) <= p_25.f1) > l_147), g_55)), p_25.f2)), 1L)));
                }
                for (l_141 = (-15); (l_141 == (-21)); l_141--)
                { 
                    union U1 **l_181 = &l_180;
                    union U1 **l_182 = (void*)0;
                    union U1 *l_184 = &g_102;
                    union U1 **l_183 = &l_184;
                    (*l_183) = ((*l_181) = l_180);
                    l_185 = &p_26;
                }
                for (l_117 = 0; (l_117 == 19); l_117 = safe_add_func_int32_t_s_s(l_117, 4))
                { 
                    struct S0 *l_188 = &g_102.f3;
                    int32_t l_212 = 9L;
                    uint16_t *l_213 = &l_142[0];
                    int16_t *l_215 = &g_174;
                    int32_t **l_216 = &l_120;
                    (*l_188) = func_18(g_11[0], g_102);
                }
                l_231 &= (((*l_120) = (((g_174 & ((*l_217) = p_25.f1)) || ((safe_sub_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((((0x0E14EDC627800E5ELL == (safe_sub_func_int64_t_s_s((*l_120), (((((*l_217) = (((*l_185) = (-10L)) > ((g_225 = &g_114) != ((!((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_25.f2, p_25.f3)), 2)) != p_25.f0) || l_214.f1) > g_101.f0)) , (void*)0)))) | 0UL) == p_25.f1) != (*l_120))))) < (*p_27)) & p_25.f3), g_11[0])) ^ p_25.f2), g_79)) < p_25.f1)) , (*l_120))) >= l_141);
            }
            else
            { 
                int8_t ***l_234 = &l_233;
                if (g_232)
                    break;
                (*l_234) = l_233;
                if ((*p_27))
                    break;
                return (*p_27);
            }
        }
        else
        { 
            uint16_t l_252 = 0x74AEL;
            union U1 ****l_269 = &g_245[3][1];
            int32_t l_283 = 0xFBF6197BL;
            struct S0 l_284 = {0x4BE67541L,0x8627E3D8L};
            int32_t *l_286 = &g_102.f0;
            int32_t *l_287 = &l_284.f0;
            int32_t *l_288 = &l_284.f0;
            int32_t *l_289 = &g_102.f3.f0;
            int32_t *l_290 = &g_102.f2.f0;
            int32_t *l_291 = &g_7[0][0];
            int32_t *l_292 = &l_241;
            int32_t *l_294[5][1];
            int32_t l_304 = (-3L);
            int32_t **l_309 = &l_292;
            uint32_t **l_343 = &g_176[0][3][2];
            int64_t l_344 = 0x13C76CDB37475A72LL;
            int64_t l_345 = (-1L);
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_294[i][j] = (void*)0;
            }
            (*l_185) = ((void*)0 != l_235);
            for (g_34 = 0; (g_34 <= 0); g_34 += 1)
            { 
                uint32_t l_242 = 0x457048CEL;
                union U1 ****l_248 = (void*)0;
                union U1 ****l_249 = &g_245[3][4];
                if ((*p_27))
                { 
                    int32_t *l_240[1][5][4] = {{{&g_7[0][1],&g_7[0][1],&g_7[0][1],&g_7[0][1]},{&g_7[0][1],&g_7[0][1],&g_7[0][1],&g_7[0][1]},{&g_7[0][1],&g_7[0][1],&g_7[0][1],&g_7[0][1]},{&g_7[0][1],&g_7[0][1],&g_7[0][1],&g_7[0][1]},{&g_7[0][1],&g_7[0][1],&g_7[0][1],&g_7[0][1]}}};
                    int i, j, k;
                    --l_237[2];
                    --l_242;
                }
                else
                { 
                    return (*p_27);
                }
                (*l_249) = g_245[1][1];
                for (g_102.f3.f0 = 0; (g_102.f3.f0 >= 0); g_102.f3.f0 -= 1)
                { 
                    int32_t *l_250 = &g_7[0][0];
                    int32_t *l_251 = &l_241;
                    union U1 *l_255 = &g_102;
                    union U1 **l_256 = &l_255;
                    --l_252;
                    (*l_256) = l_255;
                    l_257 = (void*)0;
                }
                for (l_116 = 0; (l_116 <= 0); l_116 += 1)
                { 
                    int32_t *l_258 = &g_7[g_34][(l_116 + 1)];
                    int32_t *l_259 = &g_7[0][0];
                    int32_t l_260[7][1][6] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),1L,(-3L),1L}},{{(-3L),(-3L),1L,0L,0x6910076FL,1L}},{{0L,0x6910076FL,1L,0x6910076FL,0L,1L}},{{0x6910076FL,0L,1L,(-3L),(-3L),1L}},{{(-3L),(-3L),1L,0L,0x6910076FL,1L}},{{0L,0x6910076FL,1L,0x6910076FL,0L,1L}}};
                    int32_t *l_261[2][6][6] = {{{&l_241,&l_241,&g_6,&g_11[0],&l_260[1][0][5],&g_102.f2.f0},{&g_7[0][0],&g_6,&g_9,&g_102.f2.f0,&g_9,&g_6},{&g_11[0],&g_7[0][0],&g_9,&g_7[g_34][(l_116 + 1)],&l_241,&g_102.f2.f0},{&l_117,&g_7[g_34][(l_116 + 1)],&g_6,&g_6,&g_7[g_34][(l_116 + 1)],&l_117},{&g_6,&g_7[g_34][(l_116 + 1)],&l_117,&g_7[g_34][(l_116 + 1)],&l_241,&g_9},{&g_9,&g_7[0][0],&g_11[0],&g_7[0][0],&g_9,&g_7[g_34][(l_116 + 1)]}},{{&g_9,&g_6,&g_7[0][0],&g_7[g_34][(l_116 + 1)],&l_260[1][0][5],&l_260[1][0][5]},{&g_6,&l_241,&l_241,&g_6,&g_11[0],&l_260[1][0][5]},{&l_117,&l_260[1][0][5],&g_7[0][0],&g_7[g_34][(l_116 + 1)],&g_7[g_34][(l_116 + 1)],&g_7[g_34][(l_116 + 1)]},{&g_11[0],&g_7[0][0],&g_11[0],&g_102.f2.f0,&g_7[g_34][(l_116 + 1)],&g_9},{&g_7[0][0],&l_260[1][0][5],&l_117,&g_11[0],&g_11[0],&l_117},{&l_241,&l_241,&g_6,&g_11[0],&l_260[1][0][5],&g_102.f2.f0}}};
                    int i, j, k;
                    --g_262;
                    l_283 &= ((*l_259) ^= ((((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((l_242 && (l_269 == l_270)), p_25.f1)) || ((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_252, 255UL)) == ((safe_mod_func_uint8_t_u_u(l_242, l_242)) & p_25.f1)), 5)), (*g_225))), p_26)), 0xD7L)) & 0L)), g_101.f2)) | 0x3CC6L) , 4294967295UL) || p_26));
                }
                for (l_242 = 0; (l_242 <= 0); l_242 += 1)
                { 
                    struct S0 *l_285 = &g_102.f2;
                    (*l_285) = l_284;
                }
            }
            ++l_306;
            (*l_309) = &p_26;
            for (g_102.f1 = 8; (g_102.f1 > 2); g_102.f1--)
            { 
                int32_t l_313 = 0xFEEB07A1L;
                int32_t l_314 = 0x92557BF3L;
                int32_t l_315[4][5][4] = {{{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L}},{{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L}},{{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L}},{{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L},{0L,1L,0L,1L}}};
                int8_t *l_323 = &l_295;
                int8_t *l_324[4][3][2] = {{{&l_312,&l_312},{&l_312,&l_312},{&l_312,&l_312}},{{&l_312,&l_312},{&l_312,&l_312},{&l_312,&l_312}},{{&l_312,&l_312},{&l_312,&l_312},{&l_312,&l_312}},{{&l_312,&l_312},{&l_312,&l_312},{&l_312,&l_312}}};
                uint32_t ***l_330 = &l_236;
                int32_t l_346 = (-2L);
                int i, j, k;
                ++l_316;
                (*l_287) |= ((safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u(((((1L & (l_314 = (((l_315[1][0][0] = ((*l_323) = (g_218 = g_55))) >= (~(!((safe_add_func_uint32_t_u_u(((***l_235) ^= p_25.f2), p_25.f3)) | ((+(l_330 == &g_82)) ^ 0xF1610308L))))) > p_25.f1))) > 0xB9393C2D5E6F3CDELL) , 0x01F6L) > g_11[0]), p_26)) & g_232) || (-1L)), p_25.f2)) >= p_25.f0);
                (**l_309) ^= (((l_331 != l_270) == (safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((func_30((((0xB41300F9L < ((safe_div_func_int64_t_s_s(((*p_27) > ((safe_add_func_int16_t_s_s(0xC37DL, ((*l_125) = (((((safe_lshift_func_uint8_t_u_s(((*l_287) , (*l_291)), p_25.f3)) & g_2[4]) <= 0x7FFDD9E36F35D09DLL) , p_25.f3) | g_102.f1)))) && 0xBDL)), p_25.f0)) ^ l_314)) , l_342) == l_343)) , 0x210AADFC8FABCA3FLL), 0x4BEDB2D02CD6996FLL)), 0x9838L))) <= 0xECD02C3DL);
                l_347++;
            }
        }
    }
    return l_350;
}



static union U2  func_30(uint16_t  p_31)
{ 
    int64_t l_37 = 0x0B53CF54CEAA9639LL;
    int32_t l_42 = 0L;
    int32_t l_43[6][6][4] = {{{1L,(-10L),1L,1L},{1L,(-10L),1L,(-10L)},{(-10L),0xFF50EDC6L,9L,2L},{(-5L),1L,1L,9L},{6L,1L,0xA1BF3346L,(-10L)},{6L,1L,1L,6L}},{{(-5L),(-10L),9L,1L},{(-10L),1L,1L,2L},{1L,(-5L),1L,2L},{1L,1L,1L,1L},{6L,(-10L),(-1L),6L},{1L,1L,9L,(-10L)}},{{1L,1L,9L,9L},{1L,1L,(-1L),2L},{6L,0xFF50EDC6L,1L,(-10L)},{1L,(-10L),1L,1L},{1L,(-10L),1L,(-10L)},{(-10L),0xFF50EDC6L,9L,2L}},{{(-5L),1L,1L,9L},{6L,1L,0xA1BF3346L,(-10L)},{6L,1L,1L,6L},{(-5L),(-10L),9L,1L},{(-10L),1L,1L,2L},{1L,(-5L),1L,2L}},{{1L,1L,1L,1L},{6L,(-10L),(-1L),6L},{1L,1L,9L,(-10L)},{1L,1L,9L,9L},{1L,1L,(-1L),2L},{6L,0xFF50EDC6L,1L,(-10L)}},{{1L,(-10L),1L,1L},{1L,(-10L),1L,(-10L)},{(-10L),0xFF50EDC6L,9L,2L},{(-5L),1L,1L,9L},{6L,1L,0xA1BF3346L,(-10L)},{6L,1L,1L,6L}}};
    uint32_t l_44[5] = {0UL,0UL,0UL,0UL,0UL};
    struct S0 l_52[6] = {{0x69A81677L,4294967286UL},{0x69A81677L,4294967286UL},{0x69A81677L,4294967286UL},{0x69A81677L,4294967286UL},{0x69A81677L,4294967286UL},{0x69A81677L,4294967286UL}};
    uint32_t l_64 = 0x11AEEC80L;
    int i, j, k;
    for (p_31 = 4; (p_31 <= 58); p_31 = safe_add_func_int64_t_s_s(p_31, 1))
    { 
        int32_t *l_38 = &g_7[0][0];
        int32_t *l_39 = &g_7[0][0];
        int32_t *l_40 = &g_7[0][0];
        int32_t *l_41[6][1] = {{&g_7[0][0]},{&g_11[0]},{&g_7[0][0]},{&g_7[0][0]},{&g_11[0]},{&g_7[0][0]}};
        uint16_t *l_54 = &g_55;
        uint8_t *l_77 = &g_78;
        int32_t l_97 = 0L;
        uint64_t l_98 = 18446744073709551615UL;
        int i, j;
        ++l_44[0];
        g_79 &= ((func_47(g_9, l_52[2], p_31, (l_40 = l_40)) , (++(*l_54))) & (((*l_77) = (func_58(g_7[0][0], ((safe_mul_func_uint8_t_u_u((((p_31 || (*l_38)) != l_64) , 249UL), p_31)) >= (-10L)), (*l_39)) ^ l_43[5][2][1])) >= 250UL));
        for (l_64 = 0; (l_64 < 40); l_64 = safe_add_func_int64_t_s_s(l_64, 4))
        { 
            uint8_t l_90 = 8UL;
            int32_t l_91 = (-7L);
            int32_t l_92 = (-7L);
            int32_t l_93 = (-2L);
            int32_t l_94 = 1L;
            int32_t l_95 = 1L;
            int32_t l_96[3][6][6] = {{{(-1L),3L,(-4L),1L,(-10L),0L},{0x6827892DL,0xC3D472E0L,(-10L),(-1L),5L,0xCE5D3BFBL},{0x0BAFC0C8L,0x511BF24CL,0xC3D472E0L,0xCE5D3BFBL,1L,3L},{0x50707C83L,(-2L),0x45CE9BA2L,0x0BAFC0C8L,0x02E0D295L,0x0BAFC0C8L},{(-8L),0x61173E69L,(-8L),0x2179438DL,3L,0x511BF24CL},{6L,0L,0xC6485764L,(-10L),0xAAD06F1CL,0xB10FF70AL}},{{0L,(-1L),0x61173E69L,(-10L),0x45CE9BA2L,0x2179438DL},{6L,(-1L),0xD964FF40L,0x2179438DL,(-10L),0xC3D472E0L},{(-8L),0x6827892DL,0x85F7CE25L,0x0BAFC0C8L,(-1L),0x2EAC0BEAL},{0x50707C83L,0xAAD06F1CL,1L,0xCE5D3BFBL,3L,0x534227FBL},{0x0BAFC0C8L,1L,5L,0L,(-10L),1L},{1L,0x50707C83L,(-10L),0xE5F227D7L,0xE5F227D7L,(-10L)}},{{0x32BE3B96L,0x32BE3B96L,(-10L),0L,(-1L),(-4L)},{1L,(-1L),0xAAD06F1CL,1L,(-8L),(-10L)},{0x61173E69L,1L,0xAAD06F1CL,0x2EAC0BEAL,0x32BE3B96L,(-4L)},{0x6827892DL,0x2EAC0BEAL,(-10L),(-2L),(-1L),(-10L)},{(-2L),(-1L),(-10L),0x534227FBL,0x2179438DL,1L},{0xB10FF70AL,5L,5L,6L,0xD964FF40L,0x534227FBL}}};
            int i, j, k;
            for (l_37 = 4; (l_37 >= 0); l_37 -= 1)
            { 
                uint16_t l_87 = 0x0DB9L;
                for (g_79 = 0; (g_79 <= 5); g_79 += 1)
                { 
                    const uint32_t ***l_84 = (void*)0;
                    const uint32_t ***l_85 = &g_82;
                    (*l_85) = g_82;
                    g_86[1] = &g_67;
                    --l_87;
                    (*l_38) = l_90;
                }
                for (g_79 = 1; (g_79 <= 4); g_79 += 1)
                { 
                    int i;
                    if (l_44[l_37])
                        break;
                    if (l_44[0])
                        continue;
                }
            }
            l_98++;
        }
    }
    return g_101;
}



static union U1  func_47(uint8_t  p_48, struct S0  p_49, int32_t  p_50, int32_t * p_51)
{ 
    union U1 l_53 = {1L};
    return l_53;
}



static int32_t  func_58(uint64_t  p_59, uint8_t  p_60, int32_t  p_61)
{ 
    int32_t *l_72[5];
    int8_t l_73 = 0x21L;
    uint16_t l_74 = 0xB1B4L;
    int i;
    for (i = 0; i < 5; i++)
        l_72[i] = &g_7[0][0];
    for (p_59 = 0; (p_59 < 40); ++p_59)
    { 
        int32_t *l_69 = &g_7[0][0];
        int32_t **l_68 = &l_69;
        int32_t *l_71 = &g_2[6];
        int32_t **l_70 = &l_71;
        g_7[0][0] = 0x2BC21653L;
        (*l_70) = ((*l_68) = (g_67 = &g_2[0]));
    }
    --l_74;
    return p_59;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1, "g_101.f1", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f4, "g_102.f4", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_352[i], "g_352[i]", print_hash_value);

    }
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_377.f0, "g_377.f0", print_hash_value);
    transparent_crc(g_377.f1, "g_377.f1", print_hash_value);
    transparent_crc(g_377.f4, "g_377.f4", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_494.f0, "g_494.f0", print_hash_value);
    transparent_crc(g_494.f1, "g_494.f1", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_759[i], "g_759[i]", print_hash_value);

    }
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1292[i], "g_1292[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1338[i], "g_1338[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
