// SPDX-License-Identifier: MIT
// cctest_csmith_939af224.c --- cctest case csmith_939af224 (csmith seed 2476405284)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x98d44262 */

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

// Options:   -s 2476405284 -o /tmp/csmith_gen_bg37anht/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
};

union U1 {
   const uint32_t  f0;
};

union U2 {
   const int32_t  f0;
};


static int32_t g_12[4][5][5] = {{{0xF6F49C23L,0L,0xA9864BA8L,1L,1L},{0x2E3CA369L,0xCB5AF9F7L,0x2E3CA369L,(-9L),(-1L)},{(-6L),0xB5F7919AL,6L,0L,1L},{4L,(-9L),1L,(-1L),4L},{1L,6L,6L,1L,(-6L)}},{{(-1L),(-1L),0x2E3CA369L,0x35EDADE0L,0x2E3CA369L},{1L,0xB5F7919AL,0xA9864BA8L,6L,0xF6F49C23L},{4L,0x35EDADE0L,0L,0x35EDADE0L,4L},{(-6L),0L,(-1L),1L,0xB5F7919AL},{0x2E3CA369L,0x35EDADE0L,0x2E3CA369L,(-1L),(-1L)}},{{0xF6F49C23L,0xB5F7919AL,0L,0L,0xB5F7919AL},{4L,(-1L),1L,(-9L),4L},{0xB5F7919AL,6L,0L,1L,0xF6F49C23L},{(-1L),(-9L),0x2E3CA369L,0xCB5AF9F7L,0x2E3CA369L},{0xB5F7919AL,0xB5F7919AL,(-1L),6L,(-6L)}},{{4L,0xCB5AF9F7L,0L,0xCB5AF9F7L,4L},{0xF6F49C23L,0L,0xA9864BA8L,1L,1L},{0x2E3CA369L,0xCB5AF9F7L,0x2E3CA369L,(-9L),(-1L)},{(-6L),0xB5F7919AL,6L,0L,1L},{4L,(-9L),1L,(-1L),4L}}};
static uint32_t g_15 = 4294967287UL;
static union U2 g_17 = {0x9BF5E4D8L};
static union U1 g_41[4][2] = {{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}}};
static int32_t g_108 = 0x7F33B7E8L;



static uint64_t  func_1(void);
static uint16_t  func_5(uint8_t  p_6, const uint64_t  p_7, union U1  p_8, union U2  p_9);
static uint32_t  func_18(struct S0  p_19, uint32_t  p_20, int8_t  p_21, uint16_t  p_22, int16_t  p_23);
static uint32_t  func_37(uint16_t  p_38, union U1  p_39, uint32_t  p_40);




static uint64_t  func_1(void)
{ 
    int16_t l_4 = 1L;
    union U1 l_16 = {0xE67B38EBL};
    int32_t l_110 = 0L;
    uint16_t l_111 = 1UL;
    l_110 |= (safe_rshift_func_int8_t_s_s(l_4, ((func_5(((safe_rshift_func_uint8_t_u_s(0x9FL, g_12[0][4][0])) != (safe_sub_func_int8_t_s_s(g_15, 0xADL))), g_12[2][2][2], l_16, g_17) ^ g_17.f0) >= 1L)));
    --l_111;
    return g_17.f0;
}



static uint16_t  func_5(uint8_t  p_6, const uint64_t  p_7, union U1  p_8, union U2  p_9)
{ 
    struct S0 l_24 = {0xBFCFL,7L,0L};
    const int16_t l_29 = (-7L);
    int64_t l_33 = 0xF6657EEF10DEC533LL;
    int32_t l_34 = 0x418E8DCEL;
    uint32_t l_42 = 0xA61EB613L;
    int8_t l_107 = 0xF7L;
lbl_52:
    l_33 = (func_18(l_24, l_24.f1, (((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(g_12[0][4][0], (0UL && g_17.f0))), g_17.f0)) && 5UL) , g_12[0][4][0]) & l_29) <= (-1L)), g_17.f0, p_7) < g_15);
    l_34 = ((((g_17.f0 & (--p_6)) <= l_29) < p_7) || (func_37(l_24.f0, g_41[2][0], l_24.f0) ^ g_17.f0));
    for (p_6 = 0; (p_6 <= 3); p_6 += 1)
    { 
        uint32_t l_49 = 4294967288UL;
        int32_t l_75 = 0x0F2B0E74L;
        uint8_t l_79 = 1UL;
        struct S0 l_80 = {65527UL,4L,0x25DDBF1AL};
        for (l_33 = 3; (l_33 >= 0); l_33 -= 1)
        { 
            int32_t l_47 = (-10L);
            int32_t l_48 = 0x0DB5B4C0L;
            l_42++;
            if (p_7)
            { 
                l_24.f2 = (g_12[3][4][1] |= (safe_lshift_func_uint16_t_u_u(g_41[2][0].f0, p_7)));
            }
            else
            { 
                ++l_49;
                if (p_8.f0)
                    continue;
                if (p_9.f0)
                    break;
            }
            l_34 = (0xBE9700A5FF0F9AB1LL | ((l_24.f2 = l_29) && (((p_9.f0 >= 0x30L) > g_15) | l_49)));
            for (l_48 = 0; (l_48 <= 3); l_48 += 1)
            { 
                if (p_9.f0)
                    goto lbl_52;
            }
        }
        for (l_24.f1 = 3; (l_24.f1 >= 0); l_24.f1 -= 1)
        { 
            uint32_t l_62 = 0xF9076B3EL;
            int32_t l_63 = 0xFC8DFB1AL;
            int32_t l_64 = 0x2D3B6D3EL;
            l_64 |= (((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(g_41[2][0].f0, ((((!0x2604697E54B5300FLL) == (0x8C8CL >= (((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((l_63 = (((((0x0CL >= 0UL) ^ l_62) != p_8.f0) , l_62) > l_24.f1)) > g_41[2][0].f0) == 0xCA32L), l_24.f0)) | l_62), g_17.f0)) ^ 0UL) > p_8.f0))) | g_17.f0) && 65535UL))), 0x81186C96E7F8E482LL)) , p_9.f0) || 0x5AF80CEF6D7B3CACLL);
            for (l_34 = 3; (l_34 >= 0); l_34 -= 1)
            { 
                int32_t l_78[3][4] = {{0x2902D4ECL,9L,0x2902D4ECL,0x2902D4ECL},{9L,9L,(-1L),9L},{9L,0x2902D4ECL,0x2902D4ECL,9L}};
                int i, j, k;
                l_24.f2 |= ((g_12[l_34][(l_24.f1 + 1)][(p_6 + 1)] = g_12[l_34][(l_24.f1 + 1)][(p_6 + 1)]) >= ((((safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_64 = (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((l_75 = (l_42 | l_49)) , ((safe_sub_func_uint16_t_u_u((p_7 >= l_24.f0), l_64)) , l_63)), l_78[0][3])), (-10L)))), 13)), l_49)) <= 1UL), 2)) || 0xA7F7L) ^ l_79) < p_8.f0));
                g_12[l_34][(l_24.f1 + 1)][(p_6 + 1)] = l_49;
            }
            for (l_24.f0 = 0; (l_24.f0 <= 3); l_24.f0 += 1)
            { 
                int i, j, k;
                return g_12[p_6][(p_6 + 1)][l_24.f1];
            }
        }
        for (l_75 = 0; (l_75 <= 3); l_75 += 1)
        { 
            int16_t l_89[1][2];
            struct S0 l_90 = {65535UL,0x0511L,2L};
            int32_t l_109 = 1L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_89[i][j] = 0x8FF7L;
            }
            l_24 = l_80;
            for (g_15 = 0; (g_15 <= 3); g_15 += 1)
            { 
                struct S0 l_81 = {65535UL,0x7690L,1L};
                int i, j, k;
                l_81 = l_24;
                l_80.f2 = (safe_sub_func_int64_t_s_s(0xDA9CD7CB0FD4E32FLL, (safe_rshift_func_int8_t_s_u((((-10L) < (1L && (g_12[l_75][(g_15 + 1)][g_15] = (safe_add_func_int16_t_s_s(((!g_12[p_6][(g_15 + 1)][g_15]) | l_89[0][1]), p_7))))) >= 0L), 0))));
            }
            l_90 = l_24;
            for (l_80.f1 = 0; (l_80.f1 <= 3); l_80.f1 += 1)
            { 
                int i, j, k;
                g_12[l_75][l_75][(l_75 + 1)] = p_6;
                g_12[3][1][4] = (safe_mul_func_uint8_t_u_u(p_9.f0, ((l_109 &= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(g_12[0][4][0], (g_108 = (safe_add_func_uint32_t_u_u((0x621DL >= (l_90.f2 = (safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(((g_41[2][0].f0 >= l_107) == g_17.f0), g_12[0][4][1])), g_12[0][4][0])) & l_49), p_8.f0)))), 0xE429369BL))))), g_12[0][4][0])), p_9.f0))) , 251UL)));
                if (p_6)
                    break;
            }
        }
    }
    return g_17.f0;
}



static uint32_t  func_18(struct S0  p_19, uint32_t  p_20, int8_t  p_21, uint16_t  p_22, int16_t  p_23)
{ 
    uint64_t l_30[3][3] = {{0xA32987C837E05AF8LL,18446744073709551615UL,0xA32987C837E05AF8LL},{0xA32987C837E05AF8LL,18446744073709551615UL,0xA32987C837E05AF8LL},{0xA32987C837E05AF8LL,18446744073709551615UL,0xA32987C837E05AF8LL}};
    int i, j;
    --l_30[0][0];
    return l_30[1][2];
}



static uint32_t  func_37(uint16_t  p_38, union U1  p_39, uint32_t  p_40)
{ 
    for (p_40 = 0; p_40 < 4; p_40 += 1)
    {
        for (g_15 = 0; g_15 < 5; g_15 += 1)
        {
            for (p_38 = 0; p_38 < 5; p_38 += 1)
            {
                g_12[p_40][g_15][p_38] = 1L;
            }
        }
    }
    return p_40;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_41[i][j].f0, "g_41[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
