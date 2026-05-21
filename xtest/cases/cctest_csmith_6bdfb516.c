// SPDX-License-Identifier: MIT
// cctest_csmith_6bdfb516.c --- cctest case csmith_6bdfb516 (csmith seed 1809822998)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe9c89715 */

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

// Options:   -s 1809822998 -o /tmp/csmith_gen_itp6wzbn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int8_t  f1;
};

union U1 {
   const int64_t  f0;
   int16_t  f1;
   uint8_t  f2;
};

union U2 {
   uint8_t  f0;
};

union U3 {
   int32_t  f0;
   uint8_t  f1;
};

union U4 {
   uint32_t  f0;
};

union U5 {
   struct S0  f0;
};


static int32_t g_2 = 0x12491E29L;
static uint16_t g_11 = 8UL;
static union U5 g_27[3] = {{{65533UL,0xD2L}},{{65533UL,0xD2L}},{{65533UL,0xD2L}}};
static int32_t g_48 = (-7L);
static int64_t g_50 = 4L;
static uint8_t g_74[5] = {0x79L,0x79L,0x79L,0x79L,0x79L};
static int8_t g_77 = 1L;
static int32_t g_78 = 0x4E4A47BFL;
static union U4 g_110 = {0xD6341D34L};
static int32_t g_129 = 5L;
static uint8_t g_130 = 0x4FL;
static uint32_t g_147 = 0UL;
static int32_t g_181 = 0x32CE05B3L;
static union U2 g_189 = {0x44L};
static int32_t g_271 = 0xB7B750C1L;
static int16_t g_273 = 1L;
static int32_t g_274 = 0x0173F839L;
static uint16_t g_312 = 65535UL;
static uint32_t g_341[4][3][1] = {{{4294967295UL},{0xE19C6BE0L},{4294967295UL}},{{4294967295UL},{0xE19C6BE0L},{4294967295UL}},{{4294967295UL},{0xE19C6BE0L},{4294967295UL}},{{4294967295UL},{0xE19C6BE0L},{4294967295UL}}};
static uint16_t g_343[3][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static int16_t g_359 = (-1L);
static uint32_t g_360 = 0x462A5104L;
static int32_t g_366 = 1L;
static int64_t g_368[2] = {0xCCC60F6C4407F4ECLL,0xCCC60F6C4407F4ECLL};
static int32_t g_369[4][3][4] = {{{(-8L),1L,(-8L),0x8797931AL},{(-8L),0x8797931AL,0x8797931AL,(-8L)},{(-1L),0x8797931AL,0x9D0C1D5EL,0x8797931AL}},{{0x8797931AL,1L,0x9D0C1D5EL,0x9D0C1D5EL},{(-1L),(-1L),(-8L),1L},{0x9D0C1D5EL,(-1L),0x9D0C1D5EL,(-8L)}},{{0x9D0C1D5EL,(-8L),(-8L),0x9D0C1D5EL},{0x8797931AL,(-8L),1L,(-8L)},{(-8L),(-1L),1L,1L}},{{0x8797931AL,0x8797931AL,(-8L),1L},{0x9D0C1D5EL,(-1L),0x9D0C1D5EL,(-8L)},{0x9D0C1D5EL,(-8L),(-8L),0x9D0C1D5EL}}};
static uint16_t g_371 = 0xA8A3L;



static union U5  func_1(void);
static const uint8_t  func_16(uint32_t  p_17);
static uint32_t  func_18(uint32_t  p_19, int64_t  p_20, int32_t  p_21, const union U3  p_22, union U5  p_23);
static int64_t  func_32(uint32_t  p_33, int8_t  p_34, struct S0  p_35, union U1  p_36);




static union U5  func_1(void)
{ 
    const union U3 l_26[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
    int32_t l_242 = 0x936E2BBFL;
    int32_t l_243 = 0x0183FCF3L;
    uint32_t l_244 = 0x88FDCBF5L;
    int8_t l_252 = 0L;
    int32_t l_278 = 1L;
    const int32_t l_307 = 0L;
    const union U4 l_356 = {0UL};
    union U5 l_374 = {{65531UL,0x5AL}};
    int i;
    for (g_2 = (-20); (g_2 >= (-14)); ++g_2)
    { 
        int8_t l_236 = 0L;
        struct S0 l_250[4] = {{1UL,-9L},{1UL,-9L},{1UL,-9L},{1UL,-9L}};
        int32_t l_305 = 0xEC3AFA74L;
        int32_t l_306 = 0x0044AA38L;
        int i;
        if ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_11--), (safe_sub_func_uint8_t_u_u(func_16(func_18(g_2, ((safe_div_func_uint16_t_u_u(65535UL, 0x969AL)) , 1L), g_2, l_26[3], g_27[1])), (-10L))))), g_2)) & l_236), g_181)))
        { 
            int32_t l_239 = 9L;
            union U3 l_251 = {-10L};
            struct S0 l_261 = {65534UL,1L};
            if ((safe_mod_func_uint32_t_u_u(((((l_239 && (safe_sub_func_uint64_t_u_u(((l_244++) , ((~((safe_lshift_func_int16_t_s_s((l_250[2] , (-1L)), 14)) != ((l_251 , g_130) ^ 0xD7C1L))) & g_130)), l_251.f1))) == g_74[0]) >= l_252) & g_11), 0xF47C9686L)))
            { 
                int16_t l_255 = 0L;
                g_78 = ((l_243 &= (safe_lshift_func_int16_t_s_s(((g_129 > 2L) < l_255), ((((!(safe_lshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s((g_48 ^ 0x11841307L), 0x1AL)) >= g_74[0]) < 0UL), 0))) == l_251.f0) , 18446744073709551606UL) , 0xFC4EL)))) | 0x13L);
            }
            else
            { 
                uint8_t l_272 = 0x98L;
                int32_t l_275 = 0L;
                l_250[2] = l_261;
                if (g_48)
                    continue;
                l_275 = ((g_274 ^= (g_273 &= (((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_uint64_t_u_u((g_271 = (safe_mod_func_int64_t_s_s((l_250[2].f1 | l_26[3].f1), ((g_110.f0 = l_26[3].f0) ^ (safe_sub_func_uint16_t_u_u(0xF01FL, g_48)))))), 0x770C5B0B88990D29LL)))), g_50)) , l_244) ^ l_272))) < l_236);
            }
            for (g_110.f0 = 29; (g_110.f0 <= 43); g_110.f0++)
            { 
                uint16_t l_281 = 65526UL;
                if (l_252)
                    break;
                if (l_278)
                    continue;
                l_281 &= (safe_sub_func_int8_t_s_s(g_129, (l_251.f0 = l_236)));
            }
            g_78 = g_274;
        }
        else
        { 
            int8_t l_286 = 0x19L;
            l_278 &= (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((l_286 > (safe_div_func_int16_t_s_s((((g_78 ^= (safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((((g_50 = (safe_rshift_func_int8_t_s_s((l_26[3].f1 , (g_129 , (((l_305 = (safe_mul_func_int16_t_s_s(g_11, l_286))) && (-9L)) == l_250[2].f0))), g_189.f0))) || l_306) && g_110.f0) > l_250[2].f1), 3)), g_274)), 0)), 0x90A6FF86L)) , 0x4AL), 0xA4L)) , 0x1991L), l_306))) & g_181) >= g_74[0]), 65529UL))), l_307)) , g_27[1].f0.f0), 12));
            if ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_78, g_2)), 1)))
            { 
                uint32_t l_321 = 0x01F0A48DL;
                g_312++;
                g_78 = ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(g_11, 0)) >= ((safe_add_func_uint16_t_u_u((((l_321 ^ (safe_sub_func_uint16_t_u_u(g_27[1].f0.f1, ((((g_271 ^ 255UL) > 1L) | 0UL) && g_312)))) > g_130) < g_27[1].f0.f1), 0UL)) <= 4L)) > g_130), g_27[1].f0.f0)) == l_278);
            }
            else
            { 
                int32_t l_324 = 0x545C8C14L;
                int32_t l_340 = 7L;
                int32_t l_342[3][4][3] = {{{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)},{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)}},{{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)},{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)}},{{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)},{0xF211D84CL,0xF211D84CL,0xF211D84CL},{(-1L),(-1L),(-1L)}}};
                int i, j, k;
                l_324 |= (-9L);
                l_342[2][2][1] = (safe_mod_func_uint16_t_u_u(l_324, (((safe_mul_func_int16_t_s_s((+(safe_mul_func_uint8_t_u_u(g_11, (l_305 = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s((l_340 &= (safe_sub_func_int32_t_s_s((((l_242 = ((3UL & l_236) , 0x26L)) & g_110.f0) && g_11), l_278))), l_244)) == g_50), g_341[3][2][0])), 1)))))), l_324)) ^ l_236) , 0xD053L)));
            }
            g_343[1][1]++;
        }
        if ((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_2, l_26[3].f1)), ((((((((safe_rshift_func_int16_t_s_u(((l_356 , (safe_div_func_int32_t_s_s(l_305, 0x42B3C9ABL))) || l_243), 11)) > 0x2DL) ^ g_147) ^ g_74[3]) < 0xE3L) , l_305) == g_312) , g_110.f0))), g_2)) >= l_250[2].f1), l_305)))
        { 
            g_78 = g_77;
        }
        else
        { 
            const uint16_t l_364[5][3][3] = {{{65535UL,65535UL,0x5B5AL},{0xA575L,0xA575L,0xC685L},{65535UL,65535UL,0x5B5AL}},{{0xA575L,0xA575L,0xC685L},{65535UL,65535UL,0x5B5AL},{0xA575L,0xA575L,0xC685L}},{{65535UL,65535UL,0x5B5AL},{0xA575L,0xA575L,0xC685L},{65535UL,65535UL,0x5B5AL}},{{0xA575L,0xA575L,0xC685L},{65535UL,65535UL,0x5B5AL},{0xA575L,0xA575L,0xC685L}},{{65535UL,65535UL,0x5B5AL},{0xA575L,0xA575L,0xC685L},{65535UL,65535UL,0x5B5AL}}};
            int32_t l_365 = 0xF4DD5B9CL;
            int32_t l_367 = 6L;
            int32_t l_370 = 0xD4011D43L;
            int i, j, k;
            g_360++;
            l_365 |= ((g_74[4] &= 0x93L) > (safe_unary_minus_func_int32_t_s(l_364[3][1][1])));
            g_371--;
        }
    }
    return l_374;
}



static const uint8_t  func_16(uint32_t  p_17)
{ 
    union U5 l_172 = {{65533UL,0x27L}};
    int32_t l_173 = 7L;
    int32_t l_180 = (-3L);
    int32_t l_182 = 0x797DE492L;
    union U2 l_188 = {0x8FL};
    int8_t l_209 = 5L;
    l_182 = ((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((0x89ECE453L && (l_173 &= (+(l_172 , p_17)))), ((safe_sub_func_int64_t_s_s(((((safe_add_func_uint8_t_u_u((l_180 = (safe_div_func_uint32_t_u_u(l_172.f0.f1, g_74[0]))), l_172.f0.f0)) && g_110.f0) > g_181) & g_50), l_172.f0.f0)) & l_172.f0.f0))) & 0x5FF7BA7BL) <= g_27[1].f0.f0), l_172.f0.f1)) ^ p_17);
    for (p_17 = 0; (p_17 <= 2); p_17 += 1)
    { 
        int16_t l_185 = (-10L);
        int32_t l_194 = (-4L);
        int16_t l_218 = (-1L);
        union U4 l_234 = {0x996A6281L};
        if (((l_185 ^= (!(+p_17))) && (safe_sub_func_uint64_t_u_u((l_194 = ((g_189 = l_188) , (l_180 = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_182 ^= g_48), (((p_17 == l_180) >= l_172.f0.f1) > p_17))), l_173))))), g_110.f0))))
        { 
            uint64_t l_195 = 0x1BD501287A51E9EBLL;
            int32_t l_219 = (-3L);
            l_195--;
            g_78 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_u((+((g_110.f0 = ((g_27[1].f0.f0 = (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_182 &= ((l_219 = (l_209 & (safe_sub_func_int16_t_s_s((0x1A86194BL >= (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((l_195 < p_17), g_77)) ^ 18446744073709551611UL) < g_130), l_218)), 4))), l_188.f0)))) , p_17)), p_17)), 1UL))) | g_2)) < 0x43CA9903L)), p_17)) , g_50) == p_17) >= g_2) == 0x2DL), 1)), g_77));
        }
        else
        { 
            uint64_t l_229 = 18446744073709551614UL;
            int32_t l_235 = 0x2C323CADL;
            int i;
            for (g_147 = 0; (g_147 <= 2); g_147 += 1)
            { 
                int i;
                g_78 = (((safe_add_func_uint8_t_u_u((((g_74[(p_17 + 1)] >= (g_27[g_147] , ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((g_27[g_147].f0.f1 == (safe_div_func_int8_t_s_s((-1L), p_17))) & p_17))), g_27[g_147].f0.f1)) | l_229), g_78)) < p_17))) & l_229) == 0x80L), 0x04L)) < 0x82L) || g_181);
            }
            l_235 = (g_27[p_17] , (safe_mul_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s(g_27[1].f0.f0, (l_180 = (l_234 , p_17)))) >= g_27[p_17].f0.f1) ^ g_48) & 7L) > 0xAED6AE4AL), g_50)));
        }
    }
    g_78 = g_27[1].f0.f1;
    return g_78;
}



static uint32_t  func_18(uint32_t  p_19, int64_t  p_20, int32_t  p_21, const union U3  p_22, union U5  p_23)
{ 
    uint32_t l_39 = 4294967290UL;
    int32_t l_46 = 0xA74D4B4BL;
    int32_t l_47 = 1L;
    union U1 l_49 = {0x96121589AFCA8629LL};
    int32_t l_166 = 1L;
    for (p_23.f0.f1 = 29; (p_23.f0.f1 > 28); p_23.f0.f1--)
    { 
        int32_t l_30 = 0x3493876AL;
        l_30 = (p_23.f0.f1 <= p_23.f0.f1);
    }
    l_166 = (~(p_23.f0.f0 & (func_32((safe_sub_func_int8_t_s_s(l_39, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_39, (g_48 = (l_47 = (safe_mul_func_int16_t_s_s(l_46, l_46)))))), p_20)))), p_22.f1, p_23.f0, l_49) > 0x62CBA5F0EDF424E9LL)));
    p_23.f0 = g_27[1].f0;
    return g_129;
}



static int64_t  func_32(uint32_t  p_33, int8_t  p_34, struct S0  p_35, union U1  p_36)
{ 
    uint64_t l_51[1][5];
    int32_t l_60 = 5L;
    int32_t l_61 = (-1L);
    int32_t l_97 = 8L;
    uint64_t l_101 = 1UL;
    union U2 l_146[1] = {{247UL}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_51[i][j] = 1UL;
    }
    --l_51[0][1];
    if (((l_51[0][2] < (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_51[0][2], (safe_mul_func_uint8_t_u_u((((p_36.f1 & ((l_61 |= ((l_60 = l_51[0][1]) || 1L)) == g_50)) , g_27[1].f0.f0) != l_51[0][1]), 0x75L)))), l_51[0][1]))) <= 0x03FCL))
    { 
        int8_t l_73 = 0xCCL;
        int32_t l_76[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_76[i][j] = 0x07ECB515L;
        }
        p_35 = g_27[1].f0;
        if (g_50)
        { 
            int32_t l_75 = 0x50D22F7FL;
            l_76[2][0] = ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(((0x5BB7L || g_50) <= g_27[1].f0.f1), (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x7CL, l_73)), 7)))))) != g_50) && g_74[0]), l_73)) || g_27[1].f0.f0) && l_75), 0x74F3L)) ^ p_34);
        }
        else
        { 
            return p_33;
        }
        if ((p_35.f1 | (g_77 = (((l_73 < 0UL) >= g_27[1].f0.f1) < l_73))))
        { 
            int32_t l_81 = 0L;
            g_78 = p_36.f1;
            g_78 = (safe_mul_func_int8_t_s_s((-1L), p_34));
            l_81 = ((p_34 ^= g_74[0]) >= g_27[1].f0.f1);
        }
        else
        { 
            uint8_t l_86 = 255UL;
            g_78 |= ((l_86 ^= (((p_36.f0 < (safe_sub_func_int16_t_s_s(l_60, p_35.f1))) >= ((safe_sub_func_uint8_t_u_u(0xB7L, g_2)) && g_27[1].f0.f0)) ^ 1UL)) == p_35.f1);
        }
    }
    else
    { 
        uint8_t l_100[5][1] = {{0xBFL},{0x7DL},{0xBFL},{0x7DL},{0xBFL}};
        int32_t l_128 = 0xFF246F76L;
        int i, j;
        if ((safe_mul_func_uint8_t_u_u((((((g_74[4] & (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((l_61 = ((p_36.f2 != (l_97 = p_36.f1)) && (safe_add_func_int64_t_s_s(l_100[3][0], p_34)))) <= l_101), g_27[1].f0.f1)) & g_74[4]), p_34)), 0)), g_74[1]))) , l_51[0][1]) && g_27[1].f0.f0) < g_27[1].f0.f1) , l_100[3][0]), p_36.f1)))
        { 
            uint64_t l_102 = 3UL;
            g_78 = (l_102 <= g_27[1].f0.f1);
        }
        else
        { 
            int16_t l_105 = 1L;
            int32_t l_122 = (-1L);
            for (g_78 = 0; (g_78 == 12); g_78 = safe_add_func_int64_t_s_s(g_78, 5))
            { 
                l_105 = 0xBC6A5050L;
            }
            l_122 = ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((g_110 , (safe_rshift_func_int8_t_s_s((p_35.f1 == ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((!(p_34 <= (safe_sub_func_uint16_t_u_u(g_74[4], l_105)))) ^ 0L), 0x6C253094L)), p_36.f2)) == g_27[1].f0.f1)), 5))), 0xE6A82D78L)), p_34)) == l_51[0][2]);
        }
        if (((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((((3UL || 252UL) ^ (((g_74[1] ^ (g_27[1].f0 , 0xF69F9328501D8DD5LL)) || p_33) , 0x03L)) != l_60) , p_33), 7)) && p_33), g_74[0])) && g_110.f0))
        { 
            return g_77;
        }
        else
        { 
            int16_t l_127 = 0L;
            --g_130;
        }
        for (p_35.f0 = 0; (p_35.f0 < 15); p_35.f0 = safe_add_func_uint16_t_u_u(p_35.f0, 4))
        { 
            int32_t l_148 = 0x885B3408L;
            for (g_129 = 0; (g_129 <= 2); g_129 += 1)
            { 
                int i;
                l_60 |= (safe_rshift_func_int8_t_s_u(((1L == ((((((g_74[(g_129 + 1)] & ((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_36.f0, (safe_unary_minus_func_int64_t_s((l_146[0] , 1L))))), 9)), (-1L))), 0x1AL)) ^ g_147)) > g_2) | g_147) , 0x6EA18D89BD0A635ALL) ^ l_148) == 0x63L)) == p_36.f2), 4));
            }
            for (g_110.f0 = 0; (g_110.f0 <= 0); g_110.f0 += 1)
            { 
                int64_t l_151 = 0x32677FA2621F7AE5LL;
                l_148 |= ((safe_add_func_uint16_t_u_u(g_50, 0x07D3L)) < l_151);
                g_78 = ((g_77 && p_36.f0) < (l_148 = (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(l_151, (((safe_add_func_int64_t_s_s(p_35.f1, p_36.f1)) == l_128) > g_2))) ^ g_2) , g_129), l_128)) >= l_151), p_36.f2)), 0xC6L)), 6)) != p_35.f1), p_34))));
            }
        }
    }
    return l_51[0][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_27[i].f0.f0, "g_27[i].f0.f0", print_hash_value);
        transparent_crc(g_27[i].f0.f1, "g_27[i].f0.f1", print_hash_value);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_110.f0, "g_110.f0", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_341[i][j][k], "g_341[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_343[i][j], "g_343[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_368[i], "g_368[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_369[i][j][k], "g_369[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_371, "g_371", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
