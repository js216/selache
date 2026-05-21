// SPDX-License-Identifier: MIT
// cctest_csmith_351a212b.c --- cctest case csmith_351a212b (csmith seed 890904875)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5ef133c9 */

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

// Options:   -s 890904875 -o /tmp/csmith_gen_zejgw17n/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int16_t  f1;
   int8_t  f2;
   uint32_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
};
#pragma pack(pop)

union U2 {
   struct S1  f0;
   int64_t  f1;
   struct S0  f2;
};


static int16_t g_5 = 0x58BDL;
static int32_t g_15 = 1L;
static uint32_t g_16 = 0x2EF51AE9L;
static int32_t g_19 = 1L;
static uint32_t g_34 = 0xBFD090D7L;
static int8_t g_36 = 0xF2L;
static int64_t g_53 = 0xD2926A09395830AFLL;
static uint8_t g_54[1][2] = {{255UL,255UL}};
static uint32_t g_83 = 0xEFF0D54DL;
static uint32_t g_89 = 0xB08CCF5DL;
static struct S0 g_94 = {4UL,-7L,1L,0x4A184624L,0L};
static int16_t g_105 = 5L;
static uint16_t g_106 = 65535UL;
static int8_t g_119[1][2][3] = {{{1L,0x9AL,0x9AL},{1L,0x9AL,0x9AL}}};
static union U2 g_121 = {{0x19B6L}};
static uint8_t g_137 = 248UL;
static struct S1 g_140 = {65535UL};
static int64_t g_141 = 5L;
static uint32_t g_142 = 0xD1F41008L;
static int32_t g_161 = 0L;
static uint32_t g_233 = 0x0337B90CL;
static int16_t g_234[4][3][5] = {{{0x6CA4L,0x4426L,0x15FBL,1L,(-2L)},{0x5672L,0x3131L,(-1L),0x3131L,0x5672L},{0x15FBL,0x3131L,0x4426L,0L,0xF561L}},{{0xF561L,0x4426L,(-2L),0x5672L,5L},{0x3131L,0x6CA4L,0xA53BL,0x3131L,0xF561L},{0x8B13L,0x5672L,0L,0L,0x5672L}},{{0xF561L,0x15FBL,0L,0xDAF2L,(-2L)},{0x6CA4L,0xF561L,0xA53BL,(-2L),0x4426L},{(-8L),0x15FBL,6L,0xA53BL,0L}},{{0L,0xA53BL,(-1L),0L,(-1L)},{5L,5L,0xF561L,0L,0x8B13L},{0xA53BL,0L,0x624DL,0xA53BL,5L}}};
static int32_t g_244 = 0L;
static int32_t g_257 = 0L;
static uint64_t g_258 = 1UL;
static uint32_t g_264[4] = {6UL,6UL,6UL,6UL};



static union U2  func_1(void);
static const struct S1  func_6(const uint32_t  p_7);
static const uint32_t  func_8(int8_t  p_9, union U2  p_10);
static union U2  func_11(uint32_t  p_12, int16_t  p_13);




static union U2  func_1(void)
{ 
    int16_t l_4 = 0L;
    int32_t l_14[4][4] = {{0x885EA6EDL,0xDA2282D5L,0xDA2282D5L,0x885EA6EDL},{0x885EA6EDL,0xDA2282D5L,0xDA2282D5L,0x885EA6EDL},{0x885EA6EDL,0xDA2282D5L,0xDA2282D5L,0x885EA6EDL},{0x885EA6EDL,0xDA2282D5L,0xDA2282D5L,0x885EA6EDL}};
    int32_t l_162[1][1][3];
    uint32_t l_171 = 0xB83AFE1AL;
    uint32_t l_172 = 18446744073709551608UL;
    const uint64_t l_210 = 0x9BFD79EB32EB6C46LL;
    uint32_t l_256 = 0x5631CF85L;
    struct S0 l_261[2] = {{0x12L,-1L,1L,4294967290UL,0x278173FFD4BF9C39LL},{0x12L,-1L,1L,4294967290UL,0x278173FFD4BF9C39LL}};
    union U2 l_274[5] = {{{0x3023L}},{{0x3023L}},{{0x3023L}},{{0x3023L}},{{0x3023L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_162[i][j][k] = 5L;
        }
    }
    g_140 = ((safe_mod_func_int64_t_s_s(l_4, g_5)) , func_6(func_8(l_4, func_11((((g_19 |= (g_16--)) , (~0xB3L)) != l_14[0][0]), l_14[2][2]))));
    for (g_36 = 0; (g_36 >= 0); g_36 -= 1)
    { 
        uint8_t l_153[2][5][5] = {{{250UL,0x5CL,0x03L,250UL,0x03L},{0x5AL,0x5AL,0x7DL,0x99L,254UL},{1UL,255UL,0x03L,0x03L,255UL},{254UL,252UL,0x96L,254UL,0x74L},{0UL,255UL,0xF4L,255UL,0UL}},{{0x96L,0x5AL,252UL,0x74L,0x5AL},{0UL,0x5CL,0x5CL,0UL,0x03L},{254UL,0x99L,0x7DL,0x5AL,0x5AL},{1UL,0UL,1UL,0x03L,0UL},{0x5AL,252UL,0x74L,0x5AL,0x74L}}};
        int i, j, k;
        g_142--;
        l_162[0][0][0] |= (g_161 = (safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((g_121.f0.f0 = l_153[1][3][1]), (g_94.f0 != (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((g_137 = (g_54[0][1] = (safe_rshift_func_int8_t_s_s(0x77L, ((!g_94.f0) && g_36))))), l_14[2][2])), 2))))) , g_121.f0.f0), 0x90L)), g_36)), l_4)));
        if (l_14[2][2])
        { 
            return g_121;
        }
        else
        { 
            return g_121;
        }
    }
    if (((l_14[2][1] = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_162[0][0][1] | (safe_div_func_uint16_t_u_u((g_54[0][0] > g_94.f3), ((((safe_rshift_func_int8_t_s_u((g_94.f2 ^= (l_14[3][2] < l_4)), l_162[0][0][0])) && 0x01C9B9BB54825C2BLL) | l_171) , g_119[0][0][2])))) == g_19), l_172)), 0x66A8L)) , g_119[0][1][0])) || l_162[0][0][0]))
    { 
        uint16_t l_179 = 0UL;
        int32_t l_191 = 0L;
        int32_t l_192 = 0L;
        uint8_t l_211[3];
        struct S1 l_242[1][5] = {{{0x4635L},{0x4635L},{0x4635L},{0x4635L},{0x4635L}}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_211[i] = 0xF5L;
        for (g_83 = (-1); (g_83 > 29); g_83 = safe_add_func_uint8_t_u_u(g_83, 8))
        { 
            uint32_t l_190 = 0x8C3D5F11L;
            for (g_19 = (-23); (g_19 < 5); g_19++)
            { 
                int32_t l_180 = 0x9D596B0AL;
                struct S1 l_181 = {65535UL};
                g_140 = ((6L >= (l_180 = ((safe_rshift_func_uint16_t_u_s(l_179, l_14[3][3])) < g_141))) , l_181);
                if (g_36)
                    continue;
                l_192 = (safe_mod_func_uint16_t_u_u((l_191 = ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((l_172 ^ ((((l_190 != g_94.f4) == g_94.f3) != l_190) >= l_162[0][0][0])) , l_179) >= 0L), l_14[2][2])) != l_171), g_121.f2.f1)), 254UL)) , g_53)), g_94.f2));
            }
            if (l_179)
                break;
        }
        if ((safe_mul_func_uint8_t_u_u((g_94.f0 = ((((++g_137) , ((((safe_div_func_int32_t_s_s((l_162[0][0][2] , (safe_div_func_int16_t_s_s((((l_191 < ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((l_191 , (g_54[0][0] = (safe_div_func_int8_t_s_s(l_210, g_94.f0)))), g_121.f2.f4)) ^ g_94.f2) <= l_4), 1)) & g_121.f1))) != 0x51C96A089950B7ECLL)) || (-2L)) <= g_94.f2), g_5))), l_211[0])) == 0xE591L) < 0x46301990L) , g_121.f2.f4)) <= l_191) ^ g_5)), g_119[0][1][2])))
        { 
            int32_t l_235[3][4] = {{4L,0xBB412D54L,(-1L),(-1L)},{0x693F44C7L,0x693F44C7L,4L,(-1L)},{0L,0xBB412D54L,0L,4L}};
            uint16_t l_237 = 0x4B10L;
            struct S1 l_243[1][2] = {{{0xB7E0L},{0xB7E0L}}};
            int i, j;
            if ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((!(safe_rshift_func_uint8_t_u_s((l_191 = (safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint16_t_u_s(0x573CL, l_4)) , (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(((((l_4 >= (((l_162[0][0][2] |= (((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((g_234[1][2][2] ^= (g_233 ^= (-1L))))) && l_191), g_54[0][1])) >= g_16), l_235[2][0])) & g_119[0][1][1]) || 6UL)) , l_210) | 1L)) , g_121.f2.f0) || g_141) || l_192), g_94.f0)) & g_140.f0) >= 4294967295UL) && l_235[1][0]), l_211[0])), 1L)))))), g_83))) & 0xFBC765FFL) | g_83), g_119[0][0][1])), 6)))
            { 
                int32_t l_236[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_236[i][j] = 0x60CE8AD4L;
                }
                l_237++;
            }
            else
            { 
                return g_121;
            }
            for (g_5 = 20; (g_5 != 19); g_5 = safe_sub_func_uint8_t_u_u(g_5, 1))
            { 
                g_244 &= ((g_54[0][0] = ((l_243[0][1] = l_242[0][4]) , g_94.f2)) && g_106);
            }
        }
        else
        { 
            int8_t l_253[1];
            int32_t l_263 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_253[i] = 0x87L;
            if ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((l_253[0] & (l_192 | ((((l_191 ^= (((safe_mul_func_int16_t_s_s(0x5EA7L, l_253[0])) , l_210) == 1UL)) >= l_14[2][1]) == 2UL) || (-2L)))), l_210)), g_94.f2)), 0x59L)), g_234[3][1][0])) < 0xAE7EL) == l_253[0]))
            { 
                return g_121;
            }
            else
            { 
                l_256 = (g_121.f0.f0 == l_211[0]);
            }
            ++g_258;
            for (l_4 = 2; (l_4 >= 0); l_4 -= 1)
            { 
                struct S0 l_262 = {0x9BL,0x3928L,0x6FL,0UL,-10L};
                l_262 = l_261[1];
                if (g_16)
                    continue;
                g_264[2]--;
            }
        }
    }
    else
    { 
        struct S1 l_269 = {65535UL};
        for (g_244 = 0; (g_244 == (-22)); g_244 = safe_sub_func_uint32_t_u_u(g_244, 4))
        { 
            g_140 = (g_121.f2.f2 , l_269);
            for (l_269.f0 = 28; (l_269.f0 == 7); l_269.f0 = safe_sub_func_uint32_t_u_u(l_269.f0, 7))
            { 
                if (g_19)
                    break;
            }
        }
        for (g_5 = 0; (g_5 != 3); g_5 = safe_add_func_int16_t_s_s(g_5, 3))
        { 
            for (g_83 = 0; (g_83 <= 0); g_83 += 1)
            { 
                int i, j;
                if (g_54[g_83][(g_83 + 1)])
                    break;
            }
        }
    }
    return l_274[0];
}



static const struct S1  func_6(const uint32_t  p_7)
{ 
    struct S0 l_138 = {1UL,0L,0xB3L,4294967295UL,-1L};
    const struct S1 l_139 = {0x3C16L};
    g_121.f2 = l_138;
    return l_139;
}



static const uint32_t  func_8(int8_t  p_9, union U2  p_10)
{ 
    int32_t l_128 = 1L;
    int32_t l_133 = 0x750ADD41L;
    uint64_t l_134 = 1UL;
    int32_t l_135 = 1L;
    int32_t l_136 = 0L;
    g_121.f0 = p_10.f0;
    g_137 ^= (l_136 = (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(0L, ((safe_lshift_func_int16_t_s_s(g_119[0][0][2], (l_135 &= ((l_128 < (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((((l_133 = l_128) & p_10.f0.f0) , 0x24672FDCL), g_16)), l_134))) <= l_128)))) , g_54[0][0]))), 8)));
    return l_136;
}



static union U2  func_11(uint32_t  p_12, int16_t  p_13)
{ 
    uint64_t l_35 = 0xFAA83FB18BA70A1ELL;
    int32_t l_50 = 0xE719BA7CL;
    union U2 l_84 = {{0x1C32L}};
    struct S0 l_90 = {0xDEL,-1L,-3L,0x0EFD82B3L,0L};
    union U2 l_93 = {{0xC08CL}};
    int64_t l_102 = 0x13BAD782A0B0D0EDLL;
    uint16_t l_109 = 65530UL;
    for (p_13 = 6; (p_13 < 12); ++p_13)
    { 
        uint32_t l_23 = 0xCD95FF79L;
        int32_t l_51 = (-1L);
        int64_t l_82 = 0x157B4C73BE97B5C1LL;
        l_23--;
        g_34 &= (((safe_mul_func_uint8_t_u_u((l_23 & (0x65F5L <= (safe_mul_func_uint8_t_u_u(g_19, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((-1L), 4)), g_16)))))), l_23)) >= 0x52FB29D9L) ^ 0x34L);
        if ((g_36 ^= l_35))
        { 
            int8_t l_49 = 1L;
            int32_t l_52[5][4][1] = {{{5L},{0xBE7680DDL},{5L},{5L}},{{0xBE7680DDL},{5L},{5L},{0xBE7680DDL}},{{5L},{5L},{0xBE7680DDL},{5L}},{{5L},{0xBE7680DDL},{5L},{5L}},{{0xBE7680DDL},{5L},{5L},{0xBE7680DDL}}};
            int32_t l_80 = (-5L);
            int i, j, k;
            if (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(0x1AAF1919L, (safe_add_func_uint64_t_u_u((p_12 , (safe_lshift_func_int8_t_s_s((l_51 = (1L < (l_50 &= l_49))), 5))), g_15)))) , g_19) <= p_12), g_15)), p_12)), 4)) <= p_13))
            { 
                g_54[0][0]++;
                l_50 = (((65535UL == (safe_mul_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_54[0][1] ^= ((((safe_rshift_func_uint16_t_u_s((l_50 == 0x4E3176A9L), (((l_35 != 0xE47CL) > l_35) & 0xC3330F6BB026EBB4LL))) != 65535UL) && g_19) == 0xF54D9846L)), g_36)), g_36)), l_23)) , p_13) <= l_51) < l_51), 1L))) ^ 0UL) || 0xD4L);
            }
            else
            { 
                int32_t l_79 = 3L;
                int32_t l_81 = (-1L);
                g_83 ^= ((safe_mod_func_uint16_t_u_u(((!p_12) < (safe_mul_func_int8_t_s_s((l_52[2][1][0] = g_16), (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(0xF7L, (safe_lshift_func_uint8_t_u_s((!(l_80 |= (l_79 = 0x73CB3F04L))), 2)))), g_53))))), l_81)) & l_82);
            }
        }
        else
        { 
            return l_84;
        }
    }
    if ((0x0CL < (((l_50 |= ((safe_div_func_int16_t_s_s(l_35, 0x0B4CL)) > l_84.f0.f0)) , 0xD6FA3C451EDC6299LL) > p_13)))
    { 
        uint8_t l_91 = 0UL;
        int32_t l_92 = 0x453D9EB3L;
        g_89 &= (4294967295UL == (((l_84.f0 , 7L) ^ (safe_rshift_func_int8_t_s_s(p_12, p_13))) & l_84.f0.f0));
        l_92 = (((g_34 | (l_84 , (l_90 , (((l_91 , l_35) == l_91) && l_91)))) == l_91) && g_16);
        return l_93;
    }
    else
    { 
        int32_t l_101 = 9L;
        g_94 = l_90;
        l_50 = (l_101 &= (g_53 != (g_94.f2 < ((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((0x0A4143F4L && p_12), g_36)), g_36)) , g_54[0][0]))));
    }
    for (l_84.f2.f1 = 0; (l_84.f2.f1 >= 0); l_84.f2.f1 -= 1)
    { 
        int8_t l_103 = 0x2FL;
        int32_t l_104[4][4] = {{(-9L),(-9L),0x375A68AAL,9L},{0x34B7DDD9L,(-4L),0x34B7DDD9L,0x375A68AAL},{0x34B7DDD9L,0x375A68AAL,0x375A68AAL,0x34B7DDD9L},{(-9L),0x375A68AAL,9L,0x375A68AAL}};
        int i, j;
        l_102 = p_13;
        g_106--;
        for (g_53 = 0; (g_53 <= 0); g_53 += 1)
        { 
            uint32_t l_118 = 9UL;
            union U2 l_120 = {{65535UL}};
            for (l_103 = 0; (l_103 >= 0); l_103 -= 1)
            { 
                int32_t l_112[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_112[i][j] = 0xA374102DL;
                }
                ++l_109;
                l_112[0][0] = (l_90.f3 | g_89);
                if (p_13)
                    break;
            }
            for (g_83 = 0; (g_83 <= 0); g_83 += 1)
            { 
                g_119[0][0][2] ^= (((((((18446744073709551615UL < (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((!(((0xD5435D57718C4EF5LL & (p_12 || (4294967292UL > g_19))) & l_50) >= g_105)) ^ p_13), g_94.f0)), 15))) && l_103) != l_118) | p_12) | 1UL) | 0x55L) != p_12);
                return l_120;
            }
        }
    }
    return g_121;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_54[i][j], "g_54[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_121.f0.f0, "g_121.f0.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2.f0, "g_121.f2.f0", print_hash_value);
    transparent_crc(g_121.f2.f1, "g_121.f2.f1", print_hash_value);
    transparent_crc(g_121.f2.f2, "g_121.f2.f2", print_hash_value);
    transparent_crc(g_121.f2.f3, "g_121.f2.f3", print_hash_value);
    transparent_crc(g_121.f2.f4, "g_121.f2.f4", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_234[i][j][k], "g_234[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_264[i], "g_264[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
