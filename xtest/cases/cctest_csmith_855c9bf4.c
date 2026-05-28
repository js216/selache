// SPDX-License-Identifier: MIT
// cctest_csmith_855c9bf4.c --- cctest case csmith_855c9bf4 (csmith seed 2237438964)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe9d13791 */
/* @exp_ticks 0x43f8 */

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

// Options:   -s 2237438964 -o /tmp/csmith_gen_ldfop3qu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   const uint8_t  f1;
   int32_t  f2;
   uint16_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
};


static int32_t g_2 = 0xC66F5A9CL;
static struct S0 g_39 = {-4L,0xFAL,0x7494DFD9L,65534UL,0x747CL};
static union U1 g_64 = {0L};
static int64_t g_66 = 0L;
static int64_t g_69 = 1L;
static uint32_t g_71 = 0x2D295891L;
static struct S0 g_72 = {0x85L,0x26L,0x60D4A066L,65527UL,-1L};
static int64_t g_73[3][5][4] = {{{0xAD64B6C7F1499195LL,(-5L),0xB67721BC9AF00AFCLL,(-5L)},{0xA30E0CE775B4C718LL,0xD7EEACC2001377BCLL,0x8E342BA517386F73LL,0L},{0xA95E77405739219ELL,(-1L),0xAD64B6C7F1499195LL,0x3CBDA12577EDFD63LL},{1L,0x2D2708467E5F3B42LL,0x3CBDA12577EDFD63LL,0xA95E77405739219ELL},{1L,0xB4ADBCF703B84D85LL,0xAD64B6C7F1499195LL,0xAD64B6C7F1499195LL}},{{0xA95E77405739219ELL,0xA95E77405739219ELL,0x8E342BA517386F73LL,0x0990E41E6F706C0ALL},{0xA30E0CE775B4C718LL,0x8E342BA517386F73LL,0xB67721BC9AF00AFCLL,0xD7EEACC2001377BCLL},{0xAD64B6C7F1499195LL,0x36105796D0A3AFD5LL,0x91B207691369F8C3LL,0xB67721BC9AF00AFCLL},{0xB67721BC9AF00AFCLL,0x36105796D0A3AFD5LL,0xA95E77405739219ELL,0xD7EEACC2001377BCLL},{0x36105796D0A3AFD5LL,0x8E342BA517386F73LL,0x36105796D0A3AFD5LL,0x0990E41E6F706C0ALL}},{{0xB4ADBCF703B84D85LL,0xA95E77405739219ELL,(-1L),0xAD64B6C7F1499195LL},{0L,0xB4ADBCF703B84D85LL,0xB4ADBCF703B84D85LL,0xB67721BC9AF00AFCLL},{0L,1L,0xB4ADBCF703B84D85LL,0xAD64B6C7F1499195LL},{0xA30E0CE775B4C718LL,0x91B207691369F8C3LL,0x91B207691369F8C3LL,0xA30E0CE775B4C718LL},{(-1L),0L,0x2223AA5B3E5B6057LL,0xA95E77405739219ELL}}};
static uint64_t g_83 = 0xED2767F92971DF81LL;
static uint64_t g_164 = 0UL;



static struct S0  func_1(void);
static uint8_t  func_10(int32_t  p_11);
static int64_t  func_16(uint32_t  p_17, struct S0  p_18);
static struct S0  func_22(int32_t  p_23, int64_t  p_24, uint64_t  p_25, int32_t  p_26, int8_t  p_27);




static struct S0  func_1(void)
{ 
    int32_t l_68 = (-10L);
    int32_t l_106 = 0xC88BF8F4L;
    int32_t l_159 = (-1L);
    struct S0 l_168[1][3][5] = {{{{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L}},{{1L,253UL,0xA9CDD84AL,0x6036L,0xB78AL},{1L,253UL,0xA9CDD84AL,0x6036L,0xB78AL},{1L,253UL,0xA9CDD84AL,0x6036L,0xB78AL},{1L,253UL,0xA9CDD84AL,0x6036L,0xB78AL},{1L,253UL,0xA9CDD84AL,0x6036L,0xB78AL}},{{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L},{-10L,255UL,1L,8UL,0x5941L}}}};
    int i, j, k;
    for (g_2 = 0; (g_2 == 14); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    { 
        uint32_t l_5 = 4294967291UL;
        int32_t l_91 = 0xDBEA549FL;
        int32_t l_167 = (-1L);
        if (g_2)
        { 
            uint16_t l_41[5] = {1UL,1UL,1UL,1UL,1UL};
            const int32_t l_44 = 0x4B1C2FBFL;
            int32_t l_45[2][5] = {{(-1L),0x97C242EAL,0x70C1731DL,0x70C1731DL,0x97C242EAL},{(-1L),0x97C242EAL,0x70C1731DL,0x70C1731DL,0x97C242EAL}};
            uint32_t l_67 = 0x5BD1B843L;
            int32_t l_70[4] = {0x402B8877L,0x402B8877L,0x402B8877L,0x402B8877L};
            int i, j;
            if (l_5)
            { 
                uint8_t l_30 = 0x1DL;
                int32_t l_40 = 1L;
                l_70[2] = (safe_div_func_uint8_t_u_u(g_2, (safe_div_func_uint8_t_u_u(func_10((safe_lshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(func_16((g_71 = ((l_70[2] ^= (g_69 ^= ((!((((safe_lshift_func_int16_t_s_u(((((func_22((((safe_mul_func_uint16_t_u_u((--l_30), ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((l_45[0][3] = (((safe_rshift_func_int16_t_s_s(((l_41[4] = (g_39 , l_40)) == ((safe_add_func_uint32_t_u_u(((0L <= 0x319BD12F8BA79672LL) != l_5), (-1L))) | l_44)), g_39.f4)) < g_39.f4) < l_44)) <= 1L) , 1L) , 0xDFL), l_44)), l_5)) < g_39.f2))) || 1L) , g_39.f4), l_44, g_39.f0, l_40, l_5) , g_64.f0) < l_67) & g_39.f4) && g_66), 3)) , l_30) , l_40) | l_68)) , g_39.f2))) >= 0x41L)), g_72), (-10L))) , l_40), 0))), (-9L)))));
                if (l_40)
                    break;
            }
            else
            { 
                int32_t l_90 = 0L;
                g_72.f2 = ((0xB33D27CFL < (safe_lshift_func_int16_t_s_u(g_39.f4, 4))) < (safe_mod_func_uint8_t_u_u((l_90 &= (safe_mod_func_uint64_t_u_u(0x9021D5E08CE29F52LL, l_67))), 0xD5L)));
                g_72.f2 = g_83;
            }
            g_72.f2 = l_91;
        }
        else
        { 
            uint64_t l_131 = 7UL;
            int32_t l_132 = 1L;
            struct S0 l_133 = {0x60L,0x71L,1L,1UL,0x8AF5L};
            uint8_t l_158 = 0UL;
            for (l_91 = 25; (l_91 == 28); l_91 = safe_add_func_uint64_t_u_u(l_91, 3))
            { 
                uint32_t l_105[2][5][1] = {{{0UL},{18446744073709551615UL},{0UL},{18446744073709551615UL},{0UL}},{{18446744073709551615UL},{0UL},{18446744073709551615UL},{0UL},{18446744073709551615UL}}};
                int i, j, k;
                g_39.f2 = ((g_66 = ((safe_mod_func_int8_t_s_s(((((-5L) | (l_106 = (safe_mul_func_int8_t_s_s((((!0x49L) >= (((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(g_39.f1, (((safe_rshift_func_uint8_t_u_u(3UL, l_105[1][1][0])) == l_105[1][1][0]) && g_69))) || 1L), 0x915BL)) <= 4294967289UL) & l_68)) <= g_39.f2), g_39.f2)))) >= g_69) == 18446744073709551608UL), g_72.f4)) >= g_39.f2)) > g_39.f1);
            }
            if (((safe_div_func_int16_t_s_s((l_132 = (safe_sub_func_int32_t_s_s(0xD8015DFAL, (safe_lshift_func_int16_t_s_s(((safe_mul_func_int64_t_s_s(l_5, (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_71, 3)), ((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((g_39.f4 = (safe_rshift_func_uint16_t_u_u(1UL, l_5))), g_39.f2)) , l_131), g_66)), g_72.f4)) && 0x08B997ADCAF14A35LL), 9)) >= g_72.f2) , l_131), l_131)) || 0x95L))) | 65529UL) == g_39.f0))) <= g_39.f1), 10))))), l_106)) , g_69))
            { 
                return l_133;
            }
            else
            { 
                uint8_t l_148 = 251UL;
                uint64_t l_157 = 18446744073709551615UL;
                l_148 = (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_72.f4, (l_133 , 0UL))), ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((4UL >= g_39.f4), g_72.f4)), l_106)) >= 0x0364B399E4605F85LL))), g_64.f0)), g_72.f3)) , l_133.f3), l_132));
                l_159 |= (safe_sub_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((g_72.f3 > ((l_132 |= (safe_mod_func_uint64_t_u_u((((l_91 , (((((l_133.f2 = (g_73[1][2][1] &= ((((g_39.f4 < l_148) == l_157) <= 0xCCL) , g_39.f4))) & 0x6FF1804477D5BCDDLL) || l_106) > 1UL) || (-1L))) , 0x47D9L) != l_5), g_39.f3))) && g_39.f0)) | g_39.f4), l_157)), 4294967291UL)) || g_72.f0), l_158));
            }
            for (l_158 = 11; (l_158 > 19); l_158 = safe_add_func_int64_t_s_s(l_158, 1))
            { 
                g_72.f2 |= (((safe_rshift_func_int16_t_s_u(g_71, 0)) , 0x9E102BB1848449B0LL) && (3L ^ ((1L != g_69) < 0x8807F30BC1044AB5LL)));
                ++g_164;
                if (l_91)
                    continue;
            }
        }
        l_167 = (g_66 | l_68);
    }
    return l_168[0][2][1];
}



static uint8_t  func_10(int32_t  p_11)
{ 
    uint32_t l_82 = 0xC0E84683L;
    g_72.f2 = (g_72.f3 & ((~(safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(g_72.f0, (g_83 = (safe_sub_func_uint16_t_u_u(g_39.f0, l_82))))) <= g_69), 0x3C0CL))) & g_64.f0));
    return g_71;
}



static int64_t  func_16(uint32_t  p_17, struct S0  p_18)
{ 
    uint16_t l_74 = 4UL;
    for (g_72.f3 = 0; g_72.f3 < 3; g_72.f3 += 1)
    {
        for (p_17 = 0; p_17 < 5; p_17 += 1)
        {
            for (p_18.f3 = 0; p_18.f3 < 4; p_18.f3 += 1)
            {
                g_73[g_72.f3][p_17][p_18.f3] = (-2L);
            }
        }
    }
    g_72.f2 |= p_18.f3;
    return l_74;
}



static struct S0  func_22(int32_t  p_23, int64_t  p_24, uint64_t  p_25, int32_t  p_26, int8_t  p_27)
{ 
    int16_t l_49 = 7L;
    int32_t l_65[1];
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = 0xB821BFDBL;
    g_39.f2 = ((((~g_39.f2) , g_39.f4) < ((0x953B2248L & ((((safe_add_func_uint64_t_u_u(l_49, (-2L))) , g_39.f2) == g_2) ^ l_49)) >= 0xCBL)) > 0xA27FA52E963E9BECLL);
    p_23 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_27 || (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_25, p_25)), ((safe_div_func_int8_t_s_s(p_26, g_2)) != 4294967295UL)))), 8)), p_26));
    g_66 |= (safe_lshift_func_uint16_t_u_s(p_27, ((safe_div_func_uint64_t_u_u(((g_39.f2 == ((g_64 , (((l_65[0] || g_39.f3) & 0x6B3FL) | p_25)) & g_39.f2)) , l_65[0]), l_65[0])) | g_2)));
    return g_39;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
