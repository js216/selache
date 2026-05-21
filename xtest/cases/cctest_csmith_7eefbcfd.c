// SPDX-License-Identifier: MIT
// cctest_csmith_7eefbcfd.c --- cctest case csmith_7eefbcfd (csmith seed 2129640701)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc5970fb1 */

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

// Options:   -s 2129640701 -o /tmp/csmith_gen_p9o0afg0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int64_t  f1;
   uint16_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const struct S0  f1;
   int8_t * f2;
   uint32_t  f3;
};

union U2 {
   const int32_t  f0;
   int32_t  f1;
   const int32_t  f2;
   struct S0  f3;
};

union U3 {
   int8_t * const  f0;
};


static int8_t g_9 = 1L;
static int8_t *g_8 = &g_9;
static int8_t g_25 = 4L;
static uint32_t g_35[4] = {0x9F2B7826L,0x9F2B7826L,0x9F2B7826L,0x9F2B7826L};
static int32_t g_38 = (-4L);
static uint64_t g_39[2] = {9UL,9UL};
static union U3 g_62 = {0};
static int16_t g_76[3][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
static uint16_t g_78 = 65532UL;
static union U2 g_89 = {9L};
static int16_t g_107 = (-1L);
static int32_t g_110 = 3L;
static int32_t g_111 = 0xA2FB924FL;
static int32_t *g_128 = &g_110;
static int32_t **g_127[3] = {&g_128,&g_128,&g_128};
static union U1 g_205 = {18446744073709551610UL};
static struct S0 g_245 = {0xE18AB57901DC2A3FLL,0x5A566C474EC69529LL,0x1BB2L,2L};
static struct S0 g_247[3][1][2] = {{{{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L},{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L}}},{{{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L},{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L}}},{{{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L},{0x34739FD564FFCE4ALL,0x4CFAD4D3F9AC471ELL,65528UL,0x1E73E5A1L}}}};
static struct S0 *g_246 = &g_247[2][0][0];
static uint8_t g_254 = 0UL;
static uint16_t *g_279[3] = {&g_245.f2,&g_245.f2,&g_245.f2};
static uint16_t **g_278 = &g_279[2];
static int32_t g_347 = (-1L);
static uint32_t g_349 = 0x90E307C4L;
static union U3 *g_379 = (void*)0;
static union U3 **g_378 = &g_379;
static int8_t **g_437 = &g_8;
static struct S0 **g_472 = &g_246;
static struct S0 ***g_471 = &g_472;
static int32_t ***g_501 = &g_127[1];
static int32_t ****g_500 = &g_501;
static int16_t g_512 = 0xC193L;
static uint8_t *g_520[7] = {&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254};
static uint8_t ** const g_519 = &g_520[3];
static uint32_t g_529[7] = {0x94578F38L,0x94578F38L,0xC642AF54L,18446744073709551608UL,18446744073709551608UL,0x94578F38L,18446744073709551608UL};
static const int64_t *g_546 = &g_245.f0;
static const int64_t **g_545 = &g_546;
static uint16_t *g_601 = &g_247[2][0][0].f2;
static union U1 *g_701 = &g_205;
static union U1 **g_700 = &g_701;
static uint32_t g_705 = 0x41A3E160L;
static const struct S0 *g_723 = (void*)0;
static const struct S0 **g_722[4] = {&g_723,&g_723,&g_723,&g_723};
static int32_t *****g_751 = &g_500;
static int64_t *g_766 = (void*)0;
static uint16_t ***g_786 = (void*)0;
static uint8_t g_796 = 255UL;
static uint8_t g_812 = 0x10L;



static struct S0  func_1(void);
static int8_t  func_2(int8_t * p_3, int8_t * p_4, int8_t * p_5, union U1  p_6, int8_t * const  p_7);
static int8_t * func_10(int8_t * p_11);
static int8_t * func_12(uint16_t  p_13, uint16_t  p_14, int8_t * p_15, int64_t  p_16);
static uint32_t  func_28(int8_t * p_29, int8_t * const  p_30, const int32_t  p_31, int8_t * p_32, int8_t * p_33);
static int32_t  func_56(int8_t * p_57, union U2  p_58, union U3  p_59, int8_t * p_60);
static int32_t * const  func_65(union U3  p_66);
static uint64_t  func_69(const uint32_t  p_70, int8_t ** p_71, int8_t * p_72, int32_t * p_73, union U2  p_74);




static struct S0  func_1(void)
{ 
    uint32_t l_17[4][2];
    int8_t *l_24 = &g_25;
    int32_t l_26 = 0L;
    int32_t l_42 = (-1L);
    int8_t **l_204 = &l_24;
    uint32_t l_470[4][3][4] = {{{0xC3AAE1AEL,2UL,0xC3AAE1AEL,0xC3AAE1AEL},{2UL,2UL,0xDFBD8D63L,2UL},{2UL,0xC3AAE1AEL,0xC3AAE1AEL,2UL}},{{0xC3AAE1AEL,2UL,0xC3AAE1AEL,0xC3AAE1AEL},{2UL,2UL,0xDFBD8D63L,2UL},{2UL,0xC3AAE1AEL,0xC3AAE1AEL,2UL}},{{0xC3AAE1AEL,2UL,0xC3AAE1AEL,0xC3AAE1AEL},{2UL,2UL,0xDFBD8D63L,2UL},{2UL,0xC3AAE1AEL,0xC3AAE1AEL,2UL}},{{0xC3AAE1AEL,2UL,0xC3AAE1AEL,0xC3AAE1AEL},{2UL,2UL,0xDFBD8D63L,2UL},{2UL,0xC3AAE1AEL,0xC3AAE1AEL,2UL}}};
    struct S0 *** const l_473 = &g_472;
    union U3 l_487[7][3][1] = {{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}}}};
    uint32_t l_489[6][5][4] = {{{4294967295UL,0xE3D45649L,4294967287UL,0x7245B78FL},{0x12B92A40L,0x7EA7EC26L,4294967287UL,0UL},{4294967295UL,7UL,4294967295UL,0UL},{0x3935A4C5L,0x8C5895F3L,0x79F05784L,0x109A71CEL},{0x79F05784L,0x109A71CEL,0x10715D05L,4294967287UL}},{{1UL,0x3935A4C5L,0x57A96A2FL,0x8C5895F3L},{4294967295UL,1UL,0UL,4294967295UL},{0x9DD5C3D7L,4294967295UL,0x3935A4C5L,1UL},{7UL,1UL,1UL,7UL},{0x57A96A2FL,0x7E176361L,1UL,0x3935A4C5L}},{{4294967287UL,0UL,0x9922345BL,0x1B77F07CL},{1UL,0x79F05784L,0x36E41FF9L,0x1B77F07CL},{0x091F0B6CL,0UL,0x9B8C5C63L,0x3935A4C5L},{0xEA8B24D8L,0x7E176361L,0x9DD5C3D7L,7UL},{4294967295UL,1UL,0xEA8B24D8L,1UL}},{{0x8C5895F3L,4294967295UL,7UL,4294967295UL},{0UL,1UL,0x9B28AA65L,0x8C5895F3L},{0UL,0x3935A4C5L,1UL,4294967287UL},{0x1B77F07CL,0x109A71CEL,4294967295UL,0x109A71CEL},{0x995FF18AL,0x8C5895F3L,0x109A71CEL,0UL}},{{0UL,7UL,1UL,0UL},{0x36E41FF9L,0x7EA7EC26L,0x7E176361L,0x7245B78FL},{0x36E41FF9L,0xE3D45649L,1UL,0x9922345BL},{0UL,0x7245B78FL,0x109A71CEL,0xBE4EBF25L},{0x995FF18AL,1UL,4294967295UL,0UL}},{{0x1B77F07CL,0x12B92A40L,1UL,0xE3D45649L},{0UL,1UL,0x9B28AA65L,0x995FF18AL},{0UL,4294967290UL,7UL,0x30303A4CL},{0x8C5895F3L,0x9922345BL,0x9922345BL,0x9922345BL},{0x9DD5C3D7L,0x9DD5C3D7L,0x1C760AA9L,1UL}}};
    uint16_t l_514 = 0x4551L;
    int32_t *l_517 = &g_38;
    int8_t l_527 = (-1L);
    uint16_t ***l_530 = &g_278;
    const union U1 l_538 = {18446744073709551615UL};
    int32_t l_665 = 1L;
    union U3 **l_691 = &g_379;
    int16_t *l_749 = &g_76[2][0];
    int32_t ***l_848[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_17[i][j] = 18446744073709551607UL;
    }
    return (*g_246);
}



static int8_t  func_2(int8_t * p_3, int8_t * p_4, int8_t * p_5, union U1  p_6, int8_t * const  p_7)
{ 
    int8_t *l_209[7] = {&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25};
    int32_t l_220 = (-1L);
    int32_t l_241 = 0L;
    int32_t **l_264[3][6][3] = {{{(void*)0,&g_128,(void*)0},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{(void*)0,&g_128,(void*)0},{&g_128,&g_128,&g_128}},{{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{(void*)0,&g_128,(void*)0},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128}},{{(void*)0,&g_128,(void*)0},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{(void*)0,&g_128,(void*)0},{&g_128,&g_128,&g_128}}};
    struct S0 **l_288 = &g_246;
    int64_t l_352[3];
    int32_t l_366 = 0L;
    int8_t l_367 = 0L;
    uint16_t l_415 = 0UL;
    union U3 l_423 = {0};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_352[i] = 5L;
lbl_447:
    for (g_110 = (-4); (g_110 == (-27)); g_110 = safe_sub_func_int16_t_s_s(g_110, 3))
    { 
        int8_t **l_210 = &g_8;
        int32_t l_227 = 0xCFE5F798L;
        struct S0 *l_244 = &g_245;
        int32_t * const *l_257 = (void*)0;
        uint64_t l_290 = 1UL;
        int32_t l_339 = 4L;
        int32_t l_340 = 0x24C8CDCFL;
        int32_t l_341 = 0xDDD1128FL;
        int32_t l_343 = 0x2A23C349L;
        int32_t l_344 = 0xE5519FD2L;
        int32_t l_345 = 1L;
        int32_t l_346 = 0x6082E550L;
        int32_t l_348[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_348[i][j] = 7L;
        }
        if ((((~p_6.f0) , l_209[6]) == ((*l_210) = l_209[6])))
        { 
            int16_t l_217 = 0xC662L;
            int32_t l_230 = 0x064BBA38L;
            int32_t l_240 = 0L;
            int32_t *l_248 = &l_230;
            for (g_89.f3.f0 = 20; (g_89.f3.f0 >= 3); g_89.f3.f0--)
            { 
                const int32_t *l_219 = &g_38;
                const int32_t **l_218 = &l_219;
                int32_t *l_228 = (void*)0;
                int32_t *l_229[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_229[i] = &g_38;
                l_230 = ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((l_217 == (l_218 != (void*)0)), (l_220 ^ ((g_89.f2 <= l_217) < ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((g_89.f1 > l_217), g_35[3])), 1L)) <= 65535UL), 4)) , p_6.f0))))) ^ g_39[1]), l_227)) && 9UL);
                for (g_78 = 21; (g_78 >= 9); --g_78)
                { 
                    uint32_t l_233[5][2][5] = {{{4294967290UL,0UL,4294967290UL,0xB7B41478L,4294967291UL},{1UL,4294967289UL,1UL,4294967291UL,4294967295UL}},{{0UL,4294967291UL,4294967286UL,4294967295UL,0x6258E059L},{4294967295UL,0x0A9544ECL,1UL,4294967295UL,4294967291UL}},{{3UL,4294967295UL,4294967290UL,4294967290UL,4294967295UL},{0x6258E059L,4294967295UL,4294967291UL,1UL,0x52C7D00AL}},{{0UL,0x0A9544ECL,4294967291UL,0UL,0x423C0B3CL},{1UL,4294967291UL,0UL,4294967295UL,4294967295UL}},{{0UL,4294967289UL,4294967295UL,3UL,4294967291UL},{0x6258E059L,0UL,0UL,0x6258E059L,4294967291UL}}};
                    int32_t *l_238[5][5] = {{&l_227,&l_227,&l_227,&l_227,&l_227},{&g_110,&g_110,&g_110,&g_110,&g_110},{&l_227,&l_227,&l_227,&l_227,&l_227},{&g_110,&g_110,&g_110,&g_110,&g_110},{&l_227,&l_227,&l_227,&l_227,&l_227}};
                    int16_t *l_239 = &g_76[0][5];
                    int i, j, k;
                    if (l_233[0][0][2])
                        break;
                    l_227 = p_6.f0;
                    (*l_218) = (void*)0;
                    l_241 &= (g_38 || (safe_add_func_int16_t_s_s(((*l_239) = ((((l_227 <= (safe_add_func_int32_t_s_s(l_233[0][0][2], ((0x4932L != (((void*)0 != l_238[0][3]) != g_205.f0)) | p_6.f3)))) || 1L) < g_39[1]) == g_9)), l_240)));
                }
                (*l_218) = &l_241;
            }
            if (p_6.f3)
            { 
                for (g_89.f3.f2 = 0; (g_89.f3.f2 != 12); g_89.f3.f2 = safe_add_func_uint16_t_u_u(g_89.f3.f2, 6))
                { 
                    g_246 = l_244;
                }
            }
            else
            { 
                int32_t **l_249 = &l_248;
                union U3 l_250[3] = {{0},{0},{0}};
                uint64_t *l_251 = &g_39[0];
                uint8_t *l_252 = (void*)0;
                uint8_t *l_253 = &g_254;
                int32_t * const **l_258[5][6][2] = {{{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257}},{{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257}},{{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257}},{{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257}},{{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257},{&l_257,&l_257}}};
                uint16_t *l_259 = &g_245.f2;
                int i, j, k;
                (*l_249) = l_248;
                (**l_249) &= (l_250[1] , (((*l_253) = (((*l_251) = g_38) & (g_205.f0 < 1L))) | (safe_mul_func_uint16_t_u_u(((*l_259) &= ((p_6.f3 , &g_128) != (l_257 = l_257))), g_35[0]))));
            }
            if ((*l_248))
                break;
        }
        else
        { 
            uint64_t l_260 = 9UL;
            int32_t ***l_263 = &g_127[1];
            if (l_260)
                break;
            l_227 = (g_38 = (safe_mod_func_uint32_t_u_u((((*l_263) = &g_128) != l_264[2][2][2]), (p_6.f0 & (safe_mod_func_uint16_t_u_u(g_247[2][0][0].f1, p_6.f3))))));
            l_227 = ((***l_263) >= (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(g_247[2][0][0].f3, 2)) <= (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(g_110)), (safe_unary_minus_func_uint8_t_u(p_6.f3))))))), ((safe_lshift_func_int8_t_s_s(0xADL, 0)) , g_247[2][0][0].f0))));
        }
        l_227 = ((void*)0 != g_278);
        for (g_107 = 1; (g_107 >= (-14)); g_107--)
        { 
            uint16_t l_303 = 0x25E9L;
            uint8_t l_305[6][5][3] = {{{8UL,0x1FL,255UL},{0x94L,0x24L,2UL},{8UL,2UL,246UL},{0x4EL,0x1FL,247UL},{0x4EL,8UL,0x94L}},{{8UL,255UL,255UL},{0x94L,0xCCL,247UL},{8UL,0x24L,8UL},{0x4EL,255UL,0xC3L},{0x4EL,0x1EL,255UL}},{{8UL,0x5EL,0x94L},{0x94L,2UL,0xC3L},{8UL,0xCCL,0x15L},{0x4EL,0x5EL,2UL},{0x4EL,9UL,255UL}},{{8UL,0x1FL,255UL},{0x94L,0x24L,2UL},{8UL,2UL,246UL},{0x4EL,0x1FL,247UL},{0x4EL,8UL,0x94L}},{{8UL,255UL,255UL},{0x94L,0xCCL,247UL},{8UL,0x24L,8UL},{0x4EL,255UL,0xC3L},{0x4EL,0x1EL,255UL}},{{8UL,0x5EL,0x94L},{0x94L,2UL,0xC3L},{8UL,0xCCL,0x15L},{0x4EL,0x5EL,2UL},{0x4EL,9UL,255UL}}};
            int32_t ***l_315 = &l_264[2][2][2];
            int32_t l_320 = 0xF9DCE10AL;
            const struct S0 l_336 = {0x1B81BF7334FE16F3LL,1L,0x297DL,0x3237E1D0L};
            int32_t l_338[3];
            int32_t l_342[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_338[i] = 1L;
            for (i = 0; i < 3; i++)
                l_342[i] = 0xFEBCA4E2L;
            for (g_89.f3.f2 = 0; (g_89.f3.f2 == 35); g_89.f3.f2++)
            { 
                struct S0 ** const l_289[3][4] = {{&l_244,(void*)0,&l_244,(void*)0},{&l_244,(void*)0,&l_244,(void*)0},{&l_244,(void*)0,&l_244,(void*)0}};
                int32_t l_295 = 0x08633E49L;
                int32_t ***l_301 = &g_127[1];
                int32_t *** const * const l_300[1] = {&l_301};
                uint64_t l_355 = 18446744073709551615UL;
                int i, j;
                l_290 = ((safe_mod_func_uint64_t_u_u(p_6.f0, (safe_add_func_int32_t_s_s(1L, (l_288 != l_289[1][0]))))) >= 4L);
                for (l_241 = 8; (l_241 != 16); l_241 = safe_add_func_uint8_t_u_u(l_241, 8))
                { 
                    int32_t ***l_302[6][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int16_t *l_304 = &g_76[2][0];
                    uint8_t *l_316[1];
                    uint64_t *l_317 = &l_290;
                    uint32_t *l_337 = &g_205.f3;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_316[i] = (void*)0;
                    l_305[2][1][0] |= ((p_6.f0 != ((*g_8) , ((safe_sub_func_int8_t_s_s(((*p_5) &= (l_295 != ((safe_add_func_int16_t_s_s(0xFF15L, ((*l_304) = ((safe_rshift_func_uint16_t_u_s((l_300[0] == (void*)0), ((&l_257 == l_302[3][3][1]) >= l_303))) | p_6.f3)))) > p_6.f3))), 0x40L)) | g_247[2][0][0].f2))) != 0x82L);
                    l_320 = (((safe_sub_func_int32_t_s_s(l_305[2][1][0], 8UL)) && ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((*l_317) = (1UL < (g_254 = (safe_lshift_func_int16_t_s_s((+((g_247[2][0][0].f3 , l_315) == &g_127[1])), 8))))) , ((safe_rshift_func_int16_t_s_u(0L, 9)) && 0x92DA3F3ABE089725LL)), (*g_8))), (*g_8))) <= p_6.f0)) > g_9);
                    l_227 = (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*l_337) = ((((safe_rshift_func_uint16_t_u_s(p_6.f3, ((*l_304) &= (~((*l_317) = g_25))))) , (safe_mul_func_int8_t_s_s((*p_4), g_247[2][0][0].f0))) == (((safe_div_func_uint16_t_u_u(((**g_278) = 65527UL), p_6.f0)) & (safe_mod_func_uint64_t_u_u(((g_254 |= (l_336 , 1UL)) | (*g_8)), g_111))) == 247UL)) >= l_320)) || p_6.f0), (-8L))), p_6.f0)), 6));
                    g_349--;
                    l_352[2] = (l_341 = (p_6.f3 || p_6.f3));
                }
                for (l_320 = 8; (l_320 < 16); l_320 = safe_add_func_uint16_t_u_u(l_320, 9))
                { 
                    return (*p_3);
                }
                for (l_344 = 0; l_344 < 3; l_344 += 1)
                {
                    for (g_25 = 0; g_25 < 6; g_25 += 1)
                    {
                        for (g_349 = 0; g_349 < 3; g_349 += 1)
                        {
                            l_264[l_344][g_25][g_349] = &g_128;
                        }
                    }
                }
                l_355 = (*g_128);
            }
        }
        if (p_6.f0)
            break;
        if ((*g_128))
            continue;
    }
    for (g_9 = 2; (g_9 >= 0); g_9 -= 1)
    { 
        uint32_t l_360 = 9UL;
        int32_t l_365[3];
        uint16_t **l_373[2];
        union U3 *l_382 = &g_62;
        int32_t l_436 = 7L;
        int64_t l_443 = 0L;
        union U1 *l_464[4];
        int64_t l_467 = 0x99834A58D7FDB63FLL;
        int16_t l_468 = 0x1DD1L;
        int i;
        for (i = 0; i < 3; i++)
            l_365[i] = 0x08372FF3L;
        for (i = 0; i < 2; i++)
            l_373[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_464[i] = &g_205;
        for (l_241 = 0; (l_241 <= 2); l_241 += 1)
        { 
            int16_t l_358 = 0x565CL;
            uint8_t **l_364[2];
            struct S0 **l_380 = &g_246;
            int32_t l_397 = 0xD67758D9L;
            int32_t l_400 = (-4L);
            uint16_t **l_421[4][5];
            const union U1 *l_445[4][7] = {{&g_205,(void*)0,&g_205,(void*)0,(void*)0,&g_205,&g_205},{&g_205,&g_205,&g_205,(void*)0,&g_205,&g_205,&g_205},{&g_205,&g_205,&g_205,(void*)0,(void*)0,&g_205,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_205,&g_205,&g_205}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_364[i] = (void*)0;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                    l_421[i][j] = &g_279[2];
            }
            for (g_347 = 0; (g_347 <= 2); g_347 += 1)
            { 
                int32_t l_356 = 1L;
                int32_t l_357 = 0L;
                int32_t l_359 = 1L;
                uint8_t **l_363 = (void*)0;
                int i;
                l_360--;
                l_364[0] = l_363;
            }
            if (g_76[l_241][(l_241 + 2)])
            { 
                int32_t l_368[2];
                uint8_t l_369 = 0xACL;
                int i;
                for (i = 0; i < 2; i++)
                    l_368[i] = 0xFB642608L;
                ++l_369;
                for (g_254 = 0; (g_254 <= 2); g_254 += 1)
                { 
                    uint16_t ***l_372[3][6][2] = {{{&g_278,&g_278},{&g_278,&g_278},{(void*)0,(void*)0},{&g_278,&g_278},{&g_278,&g_278},{(void*)0,&g_278}},{{&g_278,(void*)0},{&g_278,(void*)0},{&g_278,&g_278},{(void*)0,&g_278},{&g_278,&g_278},{&g_278,(void*)0}},{{(void*)0,&g_278},{&g_278,&g_278},{&g_278,&g_278},{(void*)0,(void*)0},{&g_278,&g_278},{&g_278,&g_278}}};
                    int32_t l_374 = 7L;
                    int i, j, k;
                    g_278 = (l_373[1] = &g_279[2]);
                    l_374 = l_352[g_254];
                    (*g_128) ^= (l_352[l_241] || (((l_374 = l_352[g_254]) <= (safe_sub_func_uint32_t_u_u(p_6.f0, (~0x87C36A86L)))) , ((g_378 == (((void*)0 == l_380) , (void*)0)) < 0x40E51BBFL)));
                }
            }
            else
            { 
                int8_t **l_381 = &l_209[6];
                int32_t l_383 = (-1L);
                int32_t l_384 = 5L;
                uint32_t l_392[2][6][4] = {{{8UL,0x7CFA79D1L,0xA4BEFFA0L,18446744073709551615UL},{0x7CFA79D1L,8UL,0xA4BEFFA0L,0xA4BEFFA0L},{8UL,8UL,0xEFE2CFEDL,18446744073709551615UL},{8UL,0x7CFA79D1L,0xA4BEFFA0L,18446744073709551615UL},{0x7CFA79D1L,8UL,0xA4BEFFA0L,0xA4BEFFA0L},{8UL,8UL,0xEFE2CFEDL,18446744073709551615UL}},{{8UL,0x7CFA79D1L,0xA4BEFFA0L,18446744073709551615UL},{0x7CFA79D1L,8UL,0xA4BEFFA0L,0xA4BEFFA0L},{8UL,8UL,0xEFE2CFEDL,18446744073709551615UL},{8UL,0x7CFA79D1L,0xA4BEFFA0L,18446744073709551615UL},{0x7CFA79D1L,8UL,0xA4BEFFA0L,0xA4BEFFA0L},{8UL,8UL,0xEFE2CFEDL,18446744073709551615UL}}};
                int32_t l_395 = 0L;
                union U3 l_406 = {0};
                int32_t ****l_416 = (void*)0;
                uint16_t ***l_422 = &l_373[1];
                uint16_t l_433 = 0xA148L;
                union U2 l_442 = {-8L};
                int32_t *l_444 = &l_384;
                const union U1 **l_446 = &l_445[2][3];
                int i, j, k;
                l_384 = (l_383 = ((((-1L) && (((*l_381) = &g_25) == &g_25)) , (*g_378)) == l_382));
                for (g_245.f1 = 0; (g_245.f1 == (-27)); g_245.f1 = safe_sub_func_int16_t_s_s(g_245.f1, 8))
                { 
                    const int32_t l_391 = 0x6462EE01L;
                    int32_t l_396 = (-1L);
                    int32_t l_398 = 5L;
                    int32_t l_399[6][3][7] = {{{0xB4E2088BL,0x8B599871L,(-8L),0xB3075D88L,0x5C4D590CL,0x56C04FA0L,0x09F8AEBBL},{0x12442860L,0xEA0C64D3L,1L,0x09F8AEBBL,0x09F8AEBBL,1L,0xEA0C64D3L},{9L,0x53F2D9F1L,1L,(-3L),3L,0L,(-8L)}},{{4L,0x788E6973L,(-1L),0x06DD1C22L,1L,(-8L),0x8D291AE2L},{0x53F2D9F1L,3L,0xB3075D88L,(-3L),0x12442860L,0x8B599871L,(-1L)},{2L,0x8D291AE2L,(-1L),0x09F8AEBBL,(-1L),0xB3075D88L,0x67D87B94L}},{{0x5C4D590CL,5L,9L,0xB3075D88L,0L,4L,(-4L)},{0x5C4D590CL,4L,(-6L),0x8D291AE2L,0x8B599871L,0x8D291AE2L,(-6L)},{2L,2L,(-2L),(-1L),0x53F2D9F1L,(-3L),4L}},{{0x53F2D9F1L,0xD0943A29L,0xE4E20B05L,0x8CCDA2D8L,0L,4L,0x12442860L},{4L,0xB3075D88L,0x06DD1C22L,0xEA0C64D3L,0x53F2D9F1L,0xB4E2088BL,1L},{9L,0x56C04FA0L,0x53F2D9F1L,0x5C4D590CL,0x8B599871L,(-7L),0x788E6973L}},{{0x12442860L,(-4L),0L,(-2L),0L,0x09F8AEBBL,4L},{0xB4E2088BL,(-4L),(-3L),0x58088B17L,(-1L),(-1L),0x58088B17L},{0x67D87B94L,4L,(-6L),0xE4E20B05L,0x67D87B94L,0x760A9B29L,(-1L)}},{{4L,0L,0xB3075D88L,9L,5L,0x5C4D590CL,(-8L)},{0x12442860L,9L,(-4L),2L,0xD0943A29L,0x760A9B29L,(-3L)},{1L,0xEA0C64D3L,(-1L),0x788E6973L,0x8B599871L,(-1L),0L}}};
                    uint8_t l_401[4];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_401[i] = 0xC2L;
                    l_395 &= (((safe_mul_func_int8_t_s_s(l_384, ((safe_div_func_int32_t_s_s((0UL != l_391), (1UL ^ ((l_392[0][2][2] != (0xE7A952FBL >= ((safe_add_func_int16_t_s_s(((*g_246) , p_6.f3), l_383)) & (*g_8)))) ^ (*g_128))))) > 0x1DL))) , 0L) ^ 0x97FE778CAB636153LL);
                    if (p_6.f3)
                        continue;
                    l_401[1]--;
                    l_365[2] |= (l_415 |= ((l_392[0][2][2] > (safe_mod_func_uint64_t_u_u(((l_406 , (safe_rshift_func_int8_t_s_u(7L, 2))) || (((((*p_7) | l_360) , (safe_lshift_func_int16_t_s_s(((*g_128) >= (safe_mod_func_uint8_t_u_u((g_254++), ((0x01CEAAAEFE35040ALL <= 0xB00B665A4A6C8944LL) && p_6.f0)))), p_6.f0))) <= l_395) || 0UL)), l_399[5][2][1]))) & (*g_8)));
                }
                if (((((void*)0 == l_416) & ((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((p_6.f0 > (((l_421[2][0] = &g_279[2]) == ((*l_422) = (void*)0)) && (-1L))), l_365[1])), p_6.f3)) != p_6.f3)) ^ 0x122B6225L))
                { 
                    int32_t **l_424 = &g_128;
                    (*l_424) = func_65(l_423);
                }
                else
                { 
                    (*g_128) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_6.f3, 0)), (((safe_mod_func_int64_t_s_s((g_349 < ((*g_8) , ((((safe_lshift_func_int16_t_s_s((1UL || l_433), (safe_sub_func_uint16_t_u_u(l_436, 0xFE71L)))) == p_6.f3) , &p_5) != g_437))), 0xB30FFD08441D1A26LL)) <= l_360) <= 4294967295UL))) ^ g_247[2][0][0].f3);
                    (*g_128) = 0L;
                    return (*p_4);
                }
                l_444 = ((((18446744073709551615UL != ((l_423 , (p_6.f3 , (p_6.f3 , (l_360 & (safe_add_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(((l_442 , ((**l_288) , 0xACL)) || (*g_8)), g_89.f1)) , l_436), g_89.f0)))))) >= l_443)) , 1UL) | p_6.f0) , &l_395);
                (*l_446) = l_445[2][3];
            }
            for (g_25 = 2; (g_25 >= 0); g_25 -= 1)
            { 
                int i;
                return l_352[l_241];
            }
        }
        if (((*g_128) = (*g_128)))
        { 
            l_365[1] = (4294967295UL ^ 1UL);
            if (g_245.f3)
                goto lbl_447;
        }
        else
        { 
            struct S0 **l_452[2][4][2] = {{{&g_246,&g_246},{&g_246,&g_246},{&g_246,&g_246},{&g_246,&g_246}},{{&g_246,&g_246},{&g_246,&g_246},{&g_246,&g_246},{&g_246,&g_246}}};
            struct S0 ***l_453 = &l_288;
            int32_t l_458 = 1L;
            union U1 * const l_463 = &g_205;
            union U1 **l_465[3];
            uint8_t *l_466 = &g_254;
            int32_t l_469 = 0xB45CD04BL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_465[i] = &l_464[1];
            (*g_378) = (*g_378);
            l_469 &= (((((safe_mul_func_int8_t_s_s((l_467 = ((safe_rshift_func_int8_t_s_u((g_25 = (**g_437)), 2)) >= ((*l_466) = ((l_452[1][1][1] != ((*l_453) = &g_246)) | (((safe_sub_func_int8_t_s_s(((!(~(0xF7234B16L <= l_458))) && (safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((((l_463 == (l_464[1] = l_464[1])) > 65535UL) != (*g_128)), p_6.f0)) | l_360), p_6.f0))), l_436)) > p_6.f3) | 0x92E9L))))), l_468)) , 0L) , 18446744073709551612UL) , g_247[2][0][0].f1) , 0x3F7DEC0CL);
            for (g_38 = 0; (g_38 <= 2); g_38 += 1)
            { 
                int i, j;
                return g_76[g_9][(g_9 + 2)];
            }
        }
    }
    return (*p_5);
}



static int8_t * func_10(int8_t * p_11)
{ 
    uint64_t l_115 = 1UL;
    int32_t l_130 = 0x59FCE93EL;
    union U2 l_157 = {0x98979BA1L};
    union U3 *l_197 = &g_62;
    union U3 **l_196 = &l_197;
    for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
    { 
        const int32_t l_54 = 0x4D355714L;
        int32_t l_121 = 6L;
        int32_t l_123[6];
        struct S0 l_190 = {-1L,-2L,0x94D9L,0xCEA6A748L};
        union U3 **l_195 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_123[i] = 7L;
        for (g_38 = 1; (g_38 >= 0); g_38 -= 1)
        { 
            union U2 l_61 = {0x105EEFFBL};
            int8_t *l_64 = &g_25;
            int8_t **l_63 = &l_64;
            int32_t *l_116 = (void*)0;
            int32_t *l_117 = &g_110;
            int32_t l_120[7][4][2] = {{{(-9L),0x6EDC4577L},{(-9L),0x5EE0523CL},{0x2DB053F5L,0x2DB053F5L},{0x5EE0523CL,(-9L)}},{{0x6EDC4577L,(-9L)},{0x5EE0523CL,0x2DB053F5L},{0x2DB053F5L,0x5EE0523CL},{(-9L),0x6EDC4577L}},{{(-9L),0x5EE0523CL},{0x2DB053F5L,0x2DB053F5L},{0x5EE0523CL,(-9L)},{0x6EDC4577L,(-9L)}},{{0x5EE0523CL,0x2DB053F5L},{0x2DB053F5L,0x5EE0523CL},{(-9L),0x6EDC4577L},{(-9L),0x5EE0523CL}},{{0x2DB053F5L,0x2DB053F5L},{0x5EE0523CL,(-9L)},{0x6EDC4577L,(-9L)},{0x5EE0523CL,0x2DB053F5L}},{{0x2DB053F5L,0x5EE0523CL},{(-9L),0x6EDC4577L},{(-9L),0x5EE0523CL},{0x2DB053F5L,0x2DB053F5L}},{{0x5EE0523CL,(-9L)},{0x6EDC4577L,(-9L)},{0x5EE0523CL,0x2DB053F5L},{0x2DB053F5L,0x5EE0523CL}}};
            int16_t l_122 = 1L;
            uint16_t l_146 = 0x8891L;
            const struct S0 *l_198 = (void*)0;
            const struct S0 **l_199 = &l_198;
            int i, j, k;
            if (g_39[g_38])
                break;
            (*l_117) = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((~l_54), (safe_unary_minus_func_int32_t_s(func_56(&g_25, l_61, g_62, ((*l_63) = p_11)))))), 5)), l_115)) | l_54);
            for (l_115 = 0; (l_115 <= 3); l_115 += 1)
            { 
                uint32_t l_124 = 6UL;
                uint64_t *l_131 = &g_39[1];
                uint16_t *l_150 = &l_146;
                uint16_t **l_149 = &l_150;
                const uint8_t l_151 = 0x80L;
                union U3 *l_152 = &g_62;
                const int32_t *l_154[3][1];
                int32_t *** const l_167 = &g_127[1];
                int8_t *l_192 = &g_25;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_154[i][j] = &l_121;
                }
                for (g_78 = 0; (g_78 <= 3); g_78 += 1)
                { 
                    int32_t *l_118 = &g_110;
                    int32_t *l_119[5] = {&g_110,&g_110,&g_110,&g_110,&g_110};
                    int32_t ***l_129[5] = {&g_127[1],&g_127[1],&g_127[1],&g_127[1],&g_127[1]};
                    int i;
                    l_124++;
                    if (g_35[g_38])
                        continue;
                    g_127[1] = g_127[1];
                }
                if (((++(*l_131)) , ((safe_div_func_uint8_t_u_u((*l_117), (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_124, (*p_11))), (*l_117))), (safe_mod_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((l_146 <= (((safe_sub_func_int16_t_s_s((((*l_149) = &g_78) != &g_78), l_115)) , (*g_128)) >= 0xBB21A5A1L)), 1UL)) , g_89.f0), g_111)))) && l_151) & 0xF4A54BB3B6D22534LL))) & 0xA62F8029A732090DLL)))
                { 
                    union U3 **l_153 = &l_152;
                    const int32_t **l_155 = (void*)0;
                    const int32_t **l_156 = &l_154[2][0];
                    (*l_153) = l_152;
                    (*l_156) = l_154[2][0];
                }
                else
                { 
                    int32_t ***l_162[4];
                    int32_t ***l_164 = &g_127[1];
                    int32_t ****l_163 = &l_164;
                    int32_t ***l_166 = (void*)0;
                    int32_t ****l_165 = &l_166;
                    uint32_t l_191 = 0x9FF7D887L;
                    int16_t *l_193 = &g_76[0][3];
                    int16_t l_194 = 0L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_162[i] = &g_127[2];
                    (*g_128) = (l_157 , (safe_lshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((((*l_165) = ((*l_163) = (l_162[0] = &g_127[1]))) == l_167), l_123[2])) , g_76[0][4]) & (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_117) == (safe_mod_func_uint64_t_u_u(l_130, l_123[2]))) || l_123[2]), (***l_167))), g_111))), g_76[0][5])));
                    l_194 |= (safe_div_func_uint16_t_u_u((((0xB6L == (l_123[0] == (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((g_39[1] < ((*l_193) = (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_192) = ((safe_rshift_func_uint8_t_u_s((((((safe_sub_func_int64_t_s_s(g_107, (((((((*g_128) , (safe_rshift_func_int8_t_s_s(l_130, 4))) && (l_190 , l_123[0])) , l_191) >= g_76[0][5]) | l_190.f0) == g_89.f0))) | l_190.f1) > g_89.f2) , l_192) != p_11), 1)) || l_130)), g_39[1])), l_190.f1)))), (*p_11))) >= g_89.f0), 12)))) , l_157.f0) > l_157.f0), l_190.f2));
                    (***l_165) = (**l_167);
                }
                for (g_25 = 3; (g_25 >= 0); g_25 -= 1)
                { 
                    (***l_167) = (*l_117);
                }
            }
            l_196 = l_195;
            (*l_199) = l_198;
        }
    }
    for (g_89.f3.f1 = (-4); (g_89.f3.f1 > 28); g_89.f3.f1 = safe_add_func_int64_t_s_s(g_89.f3.f1, 3))
    { 
        int32_t *l_202 = &g_111;
        int32_t **l_203 = &l_202;
        (*l_203) = l_202;
    }
    return p_11;
}



static int8_t * func_12(uint16_t  p_13, uint16_t  p_14, int8_t * p_15, int64_t  p_16)
{ 
    int8_t l_43 = 0x06L;
    int32_t *l_44 = (void*)0;
    int32_t *l_45 = &g_38;
    int8_t *l_46 = &l_43;
    (*l_45) = (l_43 , l_43);
    return &g_9;
}



static uint32_t  func_28(int8_t * p_29, int8_t * const  p_30, const int32_t  p_31, int8_t * p_32, int8_t * p_33)
{ 
    int32_t *l_34[4][5][2];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_34[i][j][k] = (void*)0;
        }
    }
    --g_35[0];
    ++g_39[1];
    g_38 ^= g_39[1];
    return p_31;
}



static int32_t  func_56(int8_t * p_57, union U2  p_58, union U3  p_59, int8_t * p_60)
{ 
    for (p_58.f3.f0 = 1; (p_58.f3.f0 >= 0); p_58.f3.f0 -= 1)
    { 
        int32_t *l_113 = &g_110;
        int32_t **l_112[5] = {&l_113,&l_113,&l_113,&l_113,&l_113};
        int32_t **l_114 = &l_113;
        int i;
        (*l_114) = func_65(g_62);
    }
    return p_58.f0;
}



static int32_t * const  func_65(union U3  p_66)
{ 
    int64_t l_75[6];
    uint16_t *l_77[1][1];
    int32_t l_79 = 0xABC45AFCL;
    int8_t **l_80 = &g_8;
    int32_t *l_87[2];
    int32_t *l_88 = (void*)0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_75[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_77[i][j] = &g_78;
    }
    for (i = 0; i < 2; i++)
        l_87[i] = &g_38;
    g_111 |= (safe_add_func_uint64_t_u_u((func_69(((g_76[0][5] = l_75[3]) <= (l_79 &= l_75[1])), l_80, ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_39[1], (safe_div_func_uint32_t_u_u(((l_75[3] >= 7UL) < (l_87[0] != l_87[1])), 0x5B36276AL)))), g_38)) , (void*)0), l_88, g_89) ^ g_38), 0x99DD6BBCA57EF93BLL));
    return &g_110;
}



static uint64_t  func_69(const uint32_t  p_70, int8_t ** p_71, int8_t * p_72, int32_t * p_73, union U2  p_74)
{ 
    int64_t *l_101 = (void*)0;
    int64_t *l_102 = &g_89.f3.f1;
    int32_t l_105 = 0xC2B600A8L;
    int16_t *l_106 = &g_107;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = &g_110;
    (*l_109) &= ((safe_rshift_func_uint8_t_u_u(0xFDL, ((void*)0 == &g_78))) || ((safe_mul_func_uint16_t_u_u((g_76[1][3] < (((*l_106) = (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((~((*l_102) = p_70)), 14)), 10)), (safe_mul_func_uint8_t_u_u(l_105, p_74.f1))))) <= 0x2E72L)), 1UL)) < g_39[1]));
    return g_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_76[i][j], "g_76[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_205.f3, "g_205.f3", print_hash_value);
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_245.f2, "g_245.f2", print_hash_value);
    transparent_crc(g_245.f3, "g_245.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_247[i][j][k].f0, "g_247[i][j][k].f0", print_hash_value);
                transparent_crc(g_247[i][j][k].f1, "g_247[i][j][k].f1", print_hash_value);
                transparent_crc(g_247[i][j][k].f2, "g_247[i][j][k].f2", print_hash_value);
                transparent_crc(g_247[i][j][k].f3, "g_247[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_529[i], "g_529[i]", print_hash_value);

    }
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
