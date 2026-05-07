// SPDX-License-Identifier: MIT
// cctest_csmith_747121df.c --- cctest case csmith_747121df (csmith seed 1953571295)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5d4b78fb */

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

// Options:   -s 1953571295 -o /tmp/csmith_gen_c0cqh4a7/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   const signed f1 : 13;
   int32_t  f2;
   unsigned f3 : 13;
   int32_t  f4;
};

union U1 {
   int8_t * const  f0;
   int8_t * f1;
   uint64_t  f2;
   unsigned : 0;
   uint8_t  f3;
};


static const int64_t g_13 = 1L;
static int8_t g_15 = 0x27L;
static int8_t *g_14 = &g_15;
static int32_t g_17 = 0x42C60EDAL;
static union U1 g_59[7][7][2] = {{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}}};
static uint64_t g_61 = 0xBDBFAD241D88C924LL;
static uint32_t g_77 = 0x22523F84L;
static int32_t g_92 = 1L;
static uint32_t g_102 = 1UL;
static int32_t g_110 = (-7L);
static int8_t g_128 = 0xF6L;
static uint16_t g_135[7][4] = {{0x2F04L,0x9C81L,0x9C81L,0x2F04L},{65534UL,0xD34BL,0x9C81L,0xA9B0L},{0x2F04L,7UL,0xD699L,7UL},{7UL,0x9C81L,65534UL,7UL},{65534UL,7UL,0xA9B0L,0xA9B0L},{0xD34BL,0xD34BL,0xD699L,0x2F04L},{0xD34BL,0x9C81L,0xA9B0L,0xD34BL}};
static int64_t g_145 = 0x6115CB1E5577DD43LL;
static int8_t g_159 = 0x4BL;
static int16_t g_160 = (-8L);
static uint16_t g_176 = 0xDED5L;
static int32_t g_204 = (-1L);
static uint32_t g_205 = 0x57621A52L;
static struct S0 g_212 = {0x4EF63F154D3D32A3LL,-58,0xC8BF41CBL,39,0L};
static uint64_t *g_223 = &g_61;
static uint64_t **g_222 = &g_223;
static uint32_t g_227 = 1UL;
static uint32_t g_264 = 0x30FB1667L;
static uint16_t g_280[4] = {0x9903L,0x9903L,0x9903L,0x9903L};
static int16_t g_299 = (-4L);
static int32_t *g_342 = &g_92;
static int32_t **g_341 = &g_342;
static int64_t g_368 = (-1L);
static uint16_t g_375 = 0x1514L;
static int32_t g_384 = 3L;
static int16_t g_386 = (-1L);
static uint16_t g_387 = 0x3141L;
static int8_t **g_395 = &g_14;
static int8_t ***g_394 = &g_395;
static int32_t g_399 = 1L;
static uint16_t **g_414 = (void*)0;
static int64_t *g_515 = &g_368;
static uint64_t *g_554 = &g_61;
static struct S0 g_568[6][5][6] = {{{{0x316D5E4C8C9CDA7ELL,-6,0L,55,0xCF9BBBD2L},{0xF22E42C7904E687CLL,-39,0xBD47A8F0L,30,-2L},{0L,-61,-2L,58,-1L},{2L,-28,0x5AA6AD06L,48,-5L},{0x2CE0BC2E2A438C05LL,-79,-7L,17,-1L},{5L,-83,6L,28,0x239D206DL}},{{0x316D5E4C8C9CDA7ELL,-6,0L,55,0xCF9BBBD2L},{1L,-89,0x64C02F99L,87,1L},{2L,-28,0x5AA6AD06L,48,-5L},{0xFE64E487F070F119LL,-41,0x04B6E8DEL,54,0xE1C449C1L},{0x3532235339CCF96FLL,23,-1L,39,2L},{-4L,-9,-1L,47,-5L}},{{-6L,-29,0x20FBB6B6L,33,0xA60F732DL},{4L,-87,9L,21,0xC4F24BA6L},{-6L,-78,-1L,40,0L},{0xF22E42C7904E687CLL,-39,0xBD47A8F0L,30,-2L},{-2L,-74,0xC0324F87L,82,0xD645ECBDL},{-7L,79,0x414A6273L,60,-1L}},{{1L,-89,0x64C02F99L,87,1L},{0x4AC5FD0A58B776BBLL,-80,0x1FBAA415L,6,5L},{0x3532235339CCF96FLL,23,-1L,39,2L},{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{-6L,-29,0x20FBB6B6L,33,0xA60F732DL},{0xC7D744A789218C6DLL,30,0L,15,0L}},{{0L,-31,0L,4,1L},{5L,-83,6L,28,0x239D206DL},{0x316D5E4C8C9CDA7ELL,-6,0L,55,0xCF9BBBD2L},{-6L,-29,0x20FBB6B6L,33,0xA60F732DL},{0xF89C0B83537C4BC9LL,71,-1L,50,1L},{-1L,-57,0x2D907DC0L,50,0x6E92012BL}}},{{{-6L,-78,-1L,40,0L},{0x107DB140A27333C6LL,-5,0xF606C316L,83,0x2F822FBCL},{-7L,79,0x414A6273L,60,-1L},{6L,-47,0xB870F2B8L,49,-6L},{6L,72,0x289BCB48L,81,7L},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL}},{{0xC7D744A789218C6DLL,30,0L,15,0L},{-1L,-57,0x2D907DC0L,50,0x6E92012BL},{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{-1L,-57,0x2D907DC0L,50,0x6E92012BL},{0xC7D744A789218C6DLL,30,0L,15,0L},{0L,-31,0L,4,1L}},{{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{6L,72,0x289BCB48L,81,7L},{-1L,-81,5L,72,0xA3F6CF74L},{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{0L,-31,0L,4,1L},{-1L,44,0x45BE066EL,42,-4L}},{{0x3532235339CCF96FLL,23,-1L,39,2L},{2L,-28,0x5AA6AD06L,48,-5L},{1L,8,0x9E80F3C8L,60,0x328E5F4BL},{6L,72,0x289BCB48L,81,7L},{0x107DB140A27333C6LL,-5,0xF606C316L,83,0x2F822FBCL},{-1L,44,0x45BE066EL,42,-4L}},{{0xF89C0B83537C4BC9LL,71,-1L,50,1L},{4L,-86,0x1D153B63L,25,0x88BDE1A7L},{-1L,-81,5L,72,0xA3F6CF74L},{-6L,-78,-1L,40,0L},{0x0E17634B35C6BF41LL,-54,0L,20,0L},{0L,-31,0L,4,1L}}},{{{0x107DB140A27333C6LL,-5,0xF606C316L,83,0x2F822FBCL},{-4L,-9,-1L,47,-5L},{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{0x2CE0BC2E2A438C05LL,-79,-7L,17,-1L},{1L,80,0x4EBC5C13L,0,0L},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL}},{{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL},{0L,18,0x83B5BCA4L,58,-5L},{-7L,79,0x414A6273L,60,-1L},{-1L,-6,1L,14,0x6B6E76FCL},{0xCDE32D066A9AB62ALL,46,0L,20,0x059AFF71L},{-1L,-57,0x2D907DC0L,50,0x6E92012BL}},{{0x826CDBBA88CD851DLL,-3,0xEDEFAD6BL,69,-6L},{-1L,-81,5L,72,0xA3F6CF74L},{0x316D5E4C8C9CDA7ELL,-6,0L,55,0xCF9BBBD2L},{0x7A000A2CFEF732CBLL,-54,5L,36,1L},{0x6C1F45683BCC397BLL,-82,0xA408B943L,11,0L},{0xC7D744A789218C6DLL,30,0L,15,0L}},{{0xA6A9AF1C16E91AF7LL,-59,0xADB17B8AL,8,0L},{0xF89C0B83537C4BC9LL,71,-1L,50,1L},{0x3532235339CCF96FLL,23,-1L,39,2L},{0xBEB0981039DE0E0DLL,-18,0x1B87BD60L,44,0xCA81169FL},{-7L,79,0x414A6273L,60,-1L},{-7L,79,0x414A6273L,60,-1L}},{{0L,18,0x83B5BCA4L,58,-5L},{-6L,-78,-1L,40,0L},{-6L,-78,-1L,40,0L},{0L,18,0x83B5BCA4L,58,-5L},{0x7A000A2CFEF732CBLL,-54,5L,36,1L},{-4L,-9,-1L,47,-5L}}},{{{-1L,-57,0x2D907DC0L,50,0x6E92012BL},{1L,80,0x4EBC5C13L,0,0L},{2L,-28,0x5AA6AD06L,48,-5L},{9L,36,0x7ED1435DL,21,0x9B424B03L},{0xFE64E487F070F119LL,-41,0x04B6E8DEL,54,0xE1C449C1L},{5L,-83,6L,28,0x239D206DL}},{{-4L,-9,-1L,47,-5L},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL},{0L,-61,-2L,58,-1L},{0xCDE32D066A9AB62ALL,46,0L,20,0x059AFF71L},{0xFE64E487F070F119LL,-41,0x04B6E8DEL,54,0xE1C449C1L},{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L}},{{0xF22E42C7904E687CLL,-39,0xBD47A8F0L,30,-2L},{1L,80,0x4EBC5C13L,0,0L},{4L,-86,0x1D153B63L,25,0x88BDE1A7L},{-7L,79,0x414A6273L,60,-1L},{0x7A000A2CFEF732CBLL,-54,5L,36,1L},{0x4AC5FD0A58B776BBLL,-80,0x1FBAA415L,6,5L}},{{0xA6A9AF1C16E91AF7LL,-59,0xADB17B8AL,8,0L},{6L,-47,0xB870F2B8L,49,-6L},{-2L,-74,0xC0324F87L,82,0xD645ECBDL},{5L,-83,6L,28,0x239D206DL},{1L,8,0x9E80F3C8L,60,0x328E5F4BL},{1L,80,0x4EBC5C13L,0,0L}},{{7L,-8,1L,46,0x28BED0FBL},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL},{-6L,-29,0x20FBB6B6L,33,0xA60F732DL},{0x3532235339CCF96FLL,23,-1L,39,2L},{0xF22E42C7904E687CLL,-39,0xBD47A8F0L,30,-2L},{0x2CE0BC2E2A438C05LL,-79,-7L,17,-1L}}},{{{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{9L,36,0x7ED1435DL,21,0x9B424B03L},{0xF89C0B83537C4BC9LL,71,-1L,50,1L},{0L,-61,-2L,58,-1L},{0x1E6CC28A2DC6DF94LL,19,0x31C2C1C2L,21,0x09786FF1L},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL}},{{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{-1L,-81,5L,72,0xA3F6CF74L},{6L,72,0x289BCB48L,81,7L},{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{0x1FC5E4F88298CE9CLL,61,0x1143B679L,47,0xF110D44AL},{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL}},{{0xC7D744A789218C6DLL,30,0L,15,0L},{0x107DB140A27333C6LL,-5,0xF606C316L,83,0x2F822FBCL},{0xC7D744A789218C6DLL,30,0L,15,0L},{0x826CDBBA88CD851DLL,-3,0xEDEFAD6BL,69,-6L},{-6L,-78,-1L,40,0L},{9L,36,0x7ED1435DL,21,0x9B424B03L}},{{0xF4DD1709FF2F662DLL,-66,0xA9A04E8FL,82,2L},{0x3532235339CCF96FLL,23,-1L,39,2L},{0L,-31,0L,4,1L},{0x7A000A2CFEF732CBLL,-54,5L,36,1L},{0xFE64E487F070F119LL,-41,0x04B6E8DEL,54,0xE1C449C1L},{1L,-89,0x64C02F99L,87,1L}},{{0L,-36,0xC9E2C907L,21,0xB68EDB20L},{4L,-87,9L,21,0xC4F24BA6L},{0x107DB140A27333C6LL,-5,0xF606C316L,83,0x2F822FBCL},{0x7A000A2CFEF732CBLL,-54,5L,36,1L},{6L,72,0x289BCB48L,81,7L},{0x826CDBBA88CD851DLL,-3,0xEDEFAD6BL,69,-6L}}},{{{0xF4DD1709FF2F662DLL,-66,0xA9A04E8FL,82,2L},{0L,18,0x83B5BCA4L,58,-5L},{0x0E17634B35C6BF41LL,-54,0L,20,0L},{0x826CDBBA88CD851DLL,-3,0xEDEFAD6BL,69,-6L},{0xCCBAC041A8BDB7FALL,76,0x02F4E37DL,1,0x6A412FB8L},{0xF89C0B83537C4BC9LL,71,-1L,50,1L}},{{0xC7D744A789218C6DLL,30,0L,15,0L},{-1L,-6,1L,14,0x6B6E76FCL},{1L,80,0x4EBC5C13L,0,0L},{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{0L,18,0x83B5BCA4L,58,-5L},{0xBEB0981039DE0E0DLL,-18,0x1B87BD60L,44,0xCA81169FL}},{{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{0xFE64E487F070F119LL,-41,0x04B6E8DEL,54,0xE1C449C1L},{0xCDE32D066A9AB62ALL,46,0L,20,0x059AFF71L},{0L,-61,-2L,58,-1L},{0xA23CF2D43B3F0FBALL,-84,-3L,57,0x43D75CAAL},{-4L,-9,-1L,47,-5L}},{{0xD03B18CB53D5DB41LL,52,-6L,53,0x15F4F56EL},{-1L,44,0x45BE066EL,42,-4L},{0x6C1F45683BCC397BLL,-82,0xA408B943L,11,0L},{0x3532235339CCF96FLL,23,-1L,39,2L},{-7L,79,0x414A6273L,60,-1L},{0x1E6CC28A2DC6DF94LL,19,0x31C2C1C2L,21,0x09786FF1L}},{{7L,-8,1L,46,0x28BED0FBL},{0xE9513A69476D0F32LL,9,0x534D3ED2L,39,0x0C616228L},{-7L,79,0x414A6273L,60,-1L},{5L,-83,6L,28,0x239D206DL},{5L,-83,6L,28,0x239D206DL},{-7L,79,0x414A6273L,60,-1L}}}};
static union U1 * const *g_581 = (void*)0;
static union U1 g_592[2] = {{0},{0}};
static union U1 *g_591 = &g_592[0];
static uint32_t g_602 = 18446744073709551607UL;
static int8_t **g_650 = &g_14;
static const union U1 g_655 = {0};
static int8_t g_671 = 0xEFL;
static uint16_t g_672 = 3UL;
static uint8_t *g_762 = &g_59[0][5][1].f3;
static int16_t g_772 = 0xB132L;
static uint32_t *g_774 = &g_227;
static uint32_t **g_773 = &g_774;
static uint32_t g_799 = 2UL;
static int8_t g_806 = 0x5EL;
static uint32_t g_810 = 0x44068C31L;
static const int8_t *g_819 = &g_128;
static const int8_t **g_818[6] = {&g_819,&g_819,&g_819,&g_819,&g_819,&g_819};
static const int8_t ***g_817[1][5][1] = {{{&g_818[4]},{&g_818[4]},{&g_818[4]},{&g_818[4]},{&g_818[4]}}};
static int32_t g_901 = 0x15969EF1L;
static uint32_t g_902 = 0x0537ED95L;
static uint32_t g_976[3][7][7] = {{{1UL,9UL,1UL,18446744073709551613UL,1UL,18446744073709551613UL,1UL},{0UL,0UL,18446744073709551615UL,0xE9216003L,0x22424BCAL,0xDA004635L,0UL},{0xE9772C10L,0xDBC80857L,0xB7056F12L,0xAAB374CFL,0xA58CB71EL,0x7159FEB1L,0x139DCFBCL},{3UL,18446744073709551615UL,0UL,18446744073709551606UL,0x22424BCAL,1UL,0xE9216003L},{0xB7056F12L,0xA7F3C114L,1UL,0xDBC80857L,1UL,0xA7F3C114L,0xB7056F12L},{0xE9216003L,1UL,0x22424BCAL,18446744073709551606UL,0UL,18446744073709551615UL,3UL},{0x139DCFBCL,0x7159FEB1L,0xA58CB71EL,0xAAB374CFL,0xB7056F12L,0xDBC80857L,0xE9772C10L}},{{0UL,0xDA004635L,0x22424BCAL,0xE9216003L,18446744073709551615UL,0UL,0UL},{1UL,18446744073709551613UL,1UL,18446744073709551613UL,1UL,9UL,1UL},{18446744073709551608UL,0xDA004635L,0UL,1UL,18446744073709551606UL,0UL,18446744073709551606UL},{1UL,0x7159FEB1L,0xB7056F12L,6UL,1UL,18446744073709551612UL,0xE9C4CD8DL},{18446744073709551608UL,1UL,18446744073709551615UL,0xBD0CECA0L,3UL,3UL,0xBD0CECA0L},{1UL,0xA7F3C114L,1UL,18446744073709551612UL,0x139DCFBCL,0xAAB374CFL,0xE9C4CD8DL},{0UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,0x8647BB3DL,18446744073709551615UL,18446744073709551606UL}},{{0x139DCFBCL,0xDBC80857L,1UL,0xCE611127L,0xCAB8012CL,0xAAB374CFL,0xE9772C10L},{1UL,18446744073709551615UL,0xBD0CECA0L,3UL,3UL,0xBD0CECA0L,18446744073709551615UL},{1UL,0x2C45F55DL,1UL,0xAAB374CFL,1UL,9UL,0x50779E44L},{0xBD0CECA0L,0xE9216003L,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,0xE9216003L,0xBD0CECA0L},{0x50779E44L,9UL,1UL,0xAAB374CFL,1UL,0x2C45F55DL,1UL},{18446744073709551615UL,0xBD0CECA0L,3UL,3UL,0xBD0CECA0L,18446744073709551615UL,1UL},{0xE9772C10L,0x7159FEB1L,1UL,18446744073709551612UL,1UL,18446744073709551613UL,1UL}}};
static uint32_t g_1084 = 0xD49A2B6DL;
static int32_t *g_1118 = &g_212.f4;
static int8_t ****g_1135 = &g_394;
static uint32_t *g_1187 = &g_602;
static uint8_t g_1230 = 0x31L;
static uint16_t g_1262[6][6] = {{0xA9BDL,0xE279L,0x2ECEL,1UL,0xE279L,0xCC85L},{65527UL,0xCC85L,0x2ECEL,0xA9BDL,0x95C4L,0x95C4L},{65532UL,0xCC85L,0xCC85L,65532UL,0xE279L,0xA896L},{65532UL,0xE279L,0xA896L,0xA9BDL,0xCC85L,0xA896L},{65527UL,0x95C4L,0xCC85L,1UL,0xCC85L,0x95C4L},{0xA9BDL,0xE279L,0x2ECEL,1UL,0xE279L,0xCC85L}};
static struct S0 g_1308[1] = {{0xCF50C8E6CB577117LL,-40,-1L,64,0L}};
static uint8_t g_1317[2] = {250UL,250UL};
static int32_t *g_1336 = &g_384;
static int32_t **g_1335 = &g_1336;
static int32_t g_1341[7][2][6] = {{{0x1B48D454L,7L,0L,1L,5L,0x1B48D454L},{0x7E180EF5L,(-8L),(-1L),0x5F3B8518L,(-8L),2L}},{{0xCA159519L,0x7E180EF5L,1L,1L,1L,0xFC6E9FDDL},{(-10L),(-8L),1L,(-4L),0x07C2FA30L,(-4L)}},{{(-1L),(-8L),(-1L),0L,1L,2L},{0x1B48D454L,0x8A9E34A1L,0x7E180EF5L,0xE503E5B4L,(-8L),7L}},{{5L,(-8L),0xFCFD2A94L,0xE503E5B4L,0L,0L},{0x1B48D454L,5L,1L,0L,7L,0x1B48D454L}},{{(-1L),2L,(-8L),(-4L),(-8L),0x199E1D3AL},{(-10L),9L,0xEF0856F8L,1L,1L,0xEF0856F8L}},{{0xCA159519L,0xCA159519L,1L,0x5F3B8518L,1L,7L},{0x7E180EF5L,(-8L),0x17B13F1FL,1L,0xAF9277BCL,1L}},{{0x1B48D454L,0x7E180EF5L,0x17B13F1FL,2L,0xCA159519L,7L},{(-4L),2L,1L,0x199E1D3AL,0L,0xEF0856F8L}}};
static uint16_t g_1342 = 65535UL;
static const uint32_t g_1353 = 0x3B28E715L;
static uint16_t g_1367 = 0x17C8L;
static int32_t ***g_1407 = &g_341;
static int32_t ****g_1406 = &g_1407;
static uint64_t g_1432[6][6][5] = {{{0xD5E1CC3D1B3C8E72LL,0x5C837A8BB8E7C00BLL,0x0FD2CA2ECA7E4CFBLL,1UL,0x21DB1BCC937FB706LL},{1UL,0x1ABC2C25A9107F03LL,1UL,1UL,18446744073709551615UL},{18446744073709551606UL,0xBDB316DD18DFEAF5LL,0x425F76F30673C74ALL,0UL,18446744073709551615UL},{0x7A5081730E79967BLL,18446744073709551614UL,0xA8BE7D5C7B2F73EBLL,18446744073709551608UL,0xF2716A6143B2B9B7LL},{0x65939F01421D8AB9LL,18446744073709551615UL,0UL,0x626CD5CBE82BEBE8LL,9UL},{18446744073709551615UL,0x3FE292BA6E5B8489LL,18446744073709551608UL,0x2866248B55BFE632LL,0x07BD902CF959A0A8LL}},{{0UL,0x3FE292BA6E5B8489LL,0xBE4BF3BEFF0635CELL,1UL,0xD981F77ED7E97954LL},{0x019ABC1954649B82LL,0x50A1D457C307A662LL,0x0FD2CA2ECA7E4CFBLL,0xD448208BE01A8509LL,1UL},{0x8CBAC823441E98D8LL,1UL,0x0DCF0E2CA7ADC814LL,0x21DB1BCC937FB706LL,0xBDB316DD18DFEAF5LL},{18446744073709551615UL,0xA8BE7D5C7B2F73EBLL,18446744073709551615UL,18446744073709551607UL,0xC67C79D8C631BC89LL},{1UL,1UL,18446744073709551611UL,1UL,1UL},{0xE91F72B32DE6A6F5LL,18446744073709551606UL,0x1C757B956DBE3DF6LL,1UL,0x7E241273667F265ALL}},{{0x2866248B55BFE632LL,18446744073709551615UL,1UL,0xBDB316DD18DFEAF5LL,18446744073709551610UL},{9UL,18446744073709551610UL,1UL,18446744073709551606UL,0x7E241273667F265ALL},{1UL,0xBDB316DD18DFEAF5LL,0xC67C79D8C631BC89LL,0x8CBAC823441E98D8LL,1UL},{0x7E241273667F265ALL,0x5C837A8BB8E7C00BLL,0xF2716A6143B2B9B7LL,0UL,0xC67C79D8C631BC89LL},{0x07BD902CF959A0A8LL,0xD47A3ECD864E684DLL,0x21DB1BCC937FB706LL,0x6F7534452FED9B4ELL,0xBDB316DD18DFEAF5LL},{0x4D388FAF24437DDELL,0x8CBAC823441E98D8LL,0UL,18446744073709551615UL,1UL}},{{0xC67C79D8C631BC89LL,0xCC85EAD027141C26LL,18446744073709551610UL,0xD5E1CC3D1B3C8E72LL,0xD981F77ED7E97954LL},{1UL,1UL,0xA6F4117E7C9F57C4LL,7UL,0x07BD902CF959A0A8LL},{7UL,18446744073709551607UL,0xA6F4117E7C9F57C4LL,0x65939F01421D8AB9LL,0x0FD2CA2ECA7E4CFBLL},{1UL,0xE91F72B32DE6A6F5LL,18446744073709551610UL,0xFFAE42396A9407AFLL,18446744073709551614UL},{0x1ABC2C25A9107F03LL,0x3592F4E467A5D938LL,0UL,18446744073709551615UL,0xCC85EAD027141C26LL},{0x3FE292BA6E5B8489LL,18446744073709551615UL,0x21DB1BCC937FB706LL,0xBE4BF3BEFF0635CELL,0xA6F4117E7C9F57C4LL}},{{18446744073709551615UL,0x6F7534452FED9B4ELL,0xF2716A6143B2B9B7LL,0xF2716A6143B2B9B7LL,0x6F7534452FED9B4ELL},{0x3592F4E467A5D938LL,0x0DCF0E2CA7ADC814LL,0xC67C79D8C631BC89LL,18446744073709551610UL,0xA8BE7D5C7B2F73EBLL},{18446744073709551610UL,0xC67C79D8C631BC89LL,1UL,0xD981F77ED7E97954LL,0xD47A3ECD864E684DLL},{0xF2716A6143B2B9B7LL,0x1C757B956DBE3DF6LL,1UL,0x1A1088D441D67CA3LL,18446744073709551607UL},{18446744073709551610UL,0x1ABC2C25A9107F03LL,0x1C757B956DBE3DF6LL,18446744073709551614UL,0xD448208BE01A8509LL},{0x3592F4E467A5D938LL,0xF2716A6143B2B9B7LL,18446744073709551611UL,18446744073709551610UL,0x8CBAC823441E98D8LL}},{{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,1UL,0x0DCF0E2CA7ADC814LL},{0x3FE292BA6E5B8489LL,1UL,0x0DCF0E2CA7ADC814LL,18446744073709551615UL,18446744073709551615UL},{0x1ABC2C25A9107F03LL,0xD5E1CC3D1B3C8E72LL,0x0FD2CA2ECA7E4CFBLL,9UL,18446744073709551606UL},{1UL,0x425F76F30673C74ALL,0xBE4BF3BEFF0635CELL,0x1C757B956DBE3DF6LL,0x3FE292BA6E5B8489LL},{7UL,0x9C8ABBCA9176F4AFLL,18446744073709551608UL,0x1C757B956DBE3DF6LL,0x626CD5CBE82BEBE8LL},{1UL,0xE6295250E116CE6CLL,18446744073709551615UL,9UL,1UL}}};
static const uint8_t g_1440 = 0xF3L;
static int32_t g_1503 = 0x912CC77EL;
static int8_t g_1582[2] = {0x40L,0x40L};
static int16_t g_1584 = 1L;
static int64_t g_1585 = 0L;
static uint8_t g_1586 = 1UL;
static int32_t g_1768[3] = {4L,4L,4L};
static int8_t g_1867 = (-5L);
static uint32_t g_1888[5][3][7] = {{{0UL,0x3B48A148L,18446744073709551615UL,0xD2565E6FL,0x348166FEL,0xD2565E6FL,18446744073709551615UL},{0x94DA5577L,0x94DA5577L,0xA6F9C920L,0x48A49331L,18446744073709551608UL,0x7FFCEF17L,18446744073709551615UL},{0xB12ADDAEL,0x39512C83L,0x48A49331L,0x94DA5577L,18446744073709551615UL,9UL,9UL}},{{18446744073709551608UL,0x348166FEL,0UL,0x348166FEL,18446744073709551608UL,0x94DA5577L,0xB12ADDAEL},{0xF236A390L,0xA6F9C920L,0UL,0xB12ADDAEL,0x94DA5577L,18446744073709551608UL,0x348166FEL},{0xB12ADDAEL,0x3B48A148L,0x39512C83L,18446744073709551608UL,18446744073709551608UL,0x39512C83L,0x3B48A148L}},{{0x48A49331L,0xB12ADDAEL,0xD2565E6FL,0xF236A390L,0xAF306B3EL,0x39512C83L,0UL},{0x7FFCEF17L,9UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551608UL,18446744073709551615UL},{0xF236A390L,18446744073709551615UL,18446744073709551615UL,0xF236A390L,0xA6F9C920L,0UL,1UL}},{{0UL,18446744073709551615UL,0x7FFCEF17L,18446744073709551608UL,0x48A49331L,0xA6F9C920L,0x94DA5577L},{1UL,9UL,0UL,0xB12ADDAEL,0UL,9UL,1UL},{0xAF306B3EL,0xB12ADDAEL,9UL,0x94DA5577L,0UL,0x3B48A148L,18446744073709551615UL}},{{0x348166FEL,0x3B48A148L,18446744073709551608UL,0UL,0x48A49331L,0x48A49331L,0UL},{9UL,0xD2565E6FL,9UL,0x39512C83L,0xA6F9C920L,0x348166FEL,0x3B48A148L},{9UL,0x94DA5577L,0UL,0x3B48A148L,18446744073709551615UL,0xD2565E6FL,0x348166FEL}}};
static int32_t *g_1973 = (void*)0;
static uint64_t g_2093 = 1UL;
static union U1 g_2117 = {0};
static struct S0 g_2194 = {-1L,66,4L,78,0x2A81B927L};
static struct S0 *g_2193 = &g_2194;
static struct S0 g_2245 = {0x69FED8F979A0B71CLL,79,-1L,21,-1L};
static const int8_t g_2266 = 0x85L;
static uint8_t **g_2312[4][6] = {{&g_762,&g_762,&g_762,(void*)0,(void*)0,&g_762},{&g_762,&g_762,(void*)0,&g_762,(void*)0,&g_762},{(void*)0,&g_762,&g_762,&g_762,&g_762,(void*)0},{&g_762,(void*)0,&g_762,(void*)0,&g_762,&g_762}};
static uint8_t ***g_2311 = &g_2312[3][3];
static uint8_t ****g_2310 = &g_2311;
static uint32_t **g_2317[7][2][7] = {{{&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,(void*)0,&g_1187},{&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,(void*)0,&g_1187}},{{(void*)0,(void*)0,&g_1187,&g_1187,(void*)0,(void*)0,&g_1187},{(void*)0,&g_1187,&g_1187,&g_1187,(void*)0,&g_1187,(void*)0}},{{&g_1187,&g_1187,&g_1187,&g_1187,(void*)0,&g_1187,&g_1187},{&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187}},{{(void*)0,&g_1187,&g_1187,&g_1187,&g_1187,(void*)0,&g_1187},{(void*)0,&g_1187,&g_1187,(void*)0,&g_1187,(void*)0,(void*)0}},{{&g_1187,(void*)0,&g_1187,(void*)0,&g_1187,(void*)0,&g_1187},{&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187}},{{(void*)0,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187},{&g_1187,&g_1187,(void*)0,&g_1187,&g_1187,&g_1187,(void*)0}},{{&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187,&g_1187},{(void*)0,&g_1187,(void*)0,&g_1187,(void*)0,&g_1187,&g_1187}}};



static const uint32_t  func_1(void);
static int32_t * func_21(const uint32_t  p_22, int16_t  p_23, int8_t * p_24, struct S0  p_25);
static int16_t  func_31(int32_t * const  p_32, int32_t * p_33);
static int32_t * func_34(uint16_t  p_35, uint32_t  p_36, uint8_t  p_37);
static union U1  func_41(int32_t  p_42, int32_t * p_43);
static uint8_t  func_48(int32_t * p_49, int32_t * p_50, uint8_t  p_51, int8_t  p_52);
static int32_t * func_53(union U1  p_54, const uint64_t  p_55, int32_t  p_56, struct S0  p_57, int8_t  p_58);
static int32_t * func_68(uint16_t  p_69, int32_t * p_70, int32_t * p_71, int64_t  p_72, struct S0  p_73);




static const uint32_t  func_1(void)
{ 
    const int64_t l_6 = (-1L);
    int32_t *l_16 = &g_17;
    const union U1 l_2298 = {0};
    uint8_t **** const l_2313 = &g_2311;
    int32_t l_2326 = 0x042F10F3L;
    int32_t l_2328 = (-1L);
    int32_t l_2329 = 8L;
    int32_t l_2331 = 0xC79966E6L;
    uint64_t * const *l_2358 = &g_554;
    uint64_t * const **l_2357 = &l_2358;
lbl_2348:
    (*l_16) &= (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(l_6, (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_13 != l_6), 4)), g_13)) <= (g_14 != &g_15)), 1UL)))), 14));
    for (g_17 = 22; (g_17 != 15); g_17 = safe_sub_func_uint32_t_u_u(g_17, 7))
    { 
        uint32_t l_20[6];
        struct S0 l_64 = {-2L,81,0x4FA629A0L,39,0xED764E38L};
        uint64_t l_555 = 0UL;
        uint32_t **l_2259 = &g_774;
        int32_t *****l_2261 = &g_1406;
        uint32_t l_2289 = 0xD03063D5L;
        int8_t l_2307 = 0xD5L;
        uint64_t l_2308 = 0xEB4F65D838769833LL;
        uint32_t * const * const l_2318 = &g_1187;
        int32_t l_2332[7] = {0L,0L,0L,0L,0L,0L,0L};
        uint16_t l_2336 = 0xBA23L;
        int i;
        for (i = 0; i < 6; i++)
            l_20[i] = 0xF5954E3FL;
        for (g_15 = 1; (g_15 <= 5); g_15 += 1)
        { 
            struct S0 l_40 = {-1L,79,1L,64,2L};
            uint64_t *l_60 = &g_61;
            int32_t **l_1195[2][6][1] = {{{&l_16},{&g_1118},{&l_16},{&g_1118},{&l_16},{&g_1118}},{{&l_16},{&g_1118},{&l_16},{&g_1118},{&l_16},{&g_1118}}};
            int32_t **l_1196 = &g_1118;
            int16_t *l_1936 = &g_772;
            int16_t *l_1937[7][7] = {{&g_299,&g_299,(void*)0,&g_299,&g_299,(void*)0,&g_299},{&g_299,&g_299,&g_299,&g_299,&g_299,&g_299,&g_299},{&g_299,&g_299,&g_299,&g_299,&g_299,&g_299,&g_299},{&g_299,&g_299,(void*)0,&g_299,&g_299,(void*)0,&g_299},{&g_299,&g_299,&g_299,&g_299,&g_299,&g_299,&g_299},{&g_299,&g_299,&g_299,&g_299,&g_299,&g_299,&g_299},{&g_299,&g_299,(void*)0,&g_299,&g_299,(void*)0,&g_299}};
            int32_t *****l_2255 = &g_1406;
            int i, j, k;
        }
        for (g_299 = 23; (g_299 < (-16)); --g_299)
        { 
            union U1 **l_2258 = (void*)0;
            uint32_t **l_2260 = &g_774;
            const int32_t l_2284 = (-4L);
            (****g_1406) = (l_2258 != &g_591);
            if ((((((*g_223) , l_2259) != l_2260) , ((l_2261 = &g_1406) != (void*)0)) > (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(5UL, (*l_16))) > (*l_16)), g_1503))))
            { 
                int8_t ***l_2273 = &g_650;
                int8_t ****l_2274 = &l_2273;
                int8_t *l_2283 = &g_806;
                int16_t *l_2285[4][1][7];
                int32_t l_2286[2][4] = {{(-2L),0x281A7413L,(-2L),0x281A7413L},{(-2L),0x281A7413L,(-2L),0x281A7413L}};
                int32_t l_2287 = 0x95A75F07L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_2285[i][j][k] = &g_772;
                    }
                }
                if ((*l_16))
                    break;
                if (g_2266)
                    continue;
                (*g_1118) = ((((safe_rshift_func_uint8_t_u_u((((*g_515) = ((((safe_div_func_uint64_t_u_u((((*g_1118) > (safe_lshift_func_int8_t_s_s((((((*g_1135) = (*g_1135)) == ((*l_2274) = l_2273)) | 0x6FBCL) ^ (l_2286[0][0] ^= (((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((*g_223) & ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((*****l_2261) = (0xCBL < ((*l_2283) |= (**g_650)))), 254UL)), (*g_515))) , 18446744073709551611UL)), l_2284)) == 0x79L), l_2284)) >= 1L) ^ (*g_819)))), (*l_16)))) && 0UL), 0x5A78109BFFA2843CLL)) < l_2284) == l_2287) , (-1L))) & g_2245.f2), 7)) ^ 0xD6CB5866D7737F81LL) != 1UL) >= l_2284);
            }
            else
            { 
                uint32_t l_2288 = 0x6F88F827L;
                if (l_2288)
                    break;
            }
            (*g_342) = ((*g_1118) = (*g_342));
        }
        (*****l_2261) = l_2289;
        for (g_772 = (-2); (g_772 > (-25)); g_772 = safe_sub_func_uint16_t_u_u(g_772, 9))
        { 
            const int32_t *l_2292 = &g_204;
            const int32_t **l_2293 = &l_2292;
            uint8_t *l_2309[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t **l_2316 = &g_1187;
            int32_t l_2322 = 0xE2F8A2D2L;
            int32_t l_2324 = 0x6856CF56L;
            int16_t l_2327 = 1L;
            int32_t l_2330[1];
            uint8_t ***l_2339 = &g_2312[3][3];
            int i;
            for (i = 0; i < 1; i++)
                l_2330[i] = (-9L);
            (*l_2293) = l_2292;
            if ((((((((((safe_rshift_func_uint16_t_u_u(((void*)0 == (*g_1406)), 13)) || (*l_16)) >= (safe_mul_func_int8_t_s_s(((**g_650) = (l_2298 , (((safe_lshift_func_uint8_t_u_u(((*****l_2261) = ((*g_762) = ((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((void*)0 == &g_1336), (l_2307 || l_2308))), 0)) | (*g_774)) <= 0L) > (*l_16)))), (*l_2292))) , (void*)0) == &l_2298))), (*l_2292)))) >= (*g_774)) , g_2310) != l_2313) && (*g_515)) && 0xD0L) <= 65529UL))
            { 
                int16_t *l_2321 = &g_299;
                l_2322 = (l_2298 , ((**g_341) = (safe_mul_func_uint8_t_u_u(((g_2317[5][0][5] = l_2316) == l_2318), ((((((safe_mul_func_int16_t_s_s((0UL >= (&g_1336 != (void*)0)), ((*l_2321) = ((*l_2293) == (**g_1407))))) & (***g_394)) == (*g_223)) && (*g_774)) , 0x5D5EL) , (**l_2293))))));
                return (**g_773);
            }
            else
            { 
                int32_t *l_2323 = (void*)0;
                int32_t *l_2325[7][6][2] = {{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}},{{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2},{(void*)0,(void*)0},{&g_212.f2,(void*)0},{(void*)0,&g_212.f2}}};
                uint64_t l_2333 = 7UL;
                int i, j, k;
                l_2333++;
                for (g_102 = 0; (g_102 <= 5); g_102 += 1)
                { 
                    int i, j;
                    l_2336--;
                    if (g_1262[g_102][g_102])
                        continue;
                    (*g_2310) = l_2339;
                }
                for (g_212.f0 = 24; (g_212.f0 >= 17); g_212.f0--)
                { 
                    int16_t l_2342 = 1L;
                    uint64_t *l_2345 = &l_2308;
                    union U1 **l_2346 = &g_591;
                    int32_t l_2347 = 0x2247A936L;
                    (*g_341) = (***g_1406);
                    (*g_1118) &= l_2342;
                    (***g_1407) = (****g_1406);
                    l_2347 &= ((0xB6E98A2017651448LL != ((*l_2345) &= (**g_222))) < ((*l_16) > (((*l_2346) = &g_59[2][5][1]) == (void*)0)));
                    if ((**g_341))
                        continue;
                }
                if ((**l_2293))
                    break;
                (*g_342) = (**l_2293);
            }
        }
        if (g_772)
            goto lbl_2348;
    }
    (****g_1406) = (safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((&g_222 != l_2357), g_384)), ((*l_16) | ((**g_1406) != (((*l_16) <= 18446744073709551613UL) , &l_16))))) != 0x5948610FC15A931ALL), (*l_16))), (*l_16)));
    return (*l_16);
}



static int32_t * func_21(const uint32_t  p_22, int16_t  p_23, int8_t * p_24, struct S0  p_25)
{ 
    union U1 l_1940[4] = {{0},{0},{0},{0}};
    int32_t l_1955 = (-1L);
    uint32_t *l_1956[2][7] = {{&g_799,&g_1084,&g_1084,&g_799,&g_1084,&g_1084,&g_799},{&g_1084,&g_799,&g_1084,&g_1084,&g_799,&g_1084,&g_1084}};
    uint32_t **l_1957 = &l_1956[0][0];
    uint32_t *l_1959 = &g_227;
    uint32_t **l_1958 = &l_1959;
    int64_t l_1970 = 0L;
    int32_t l_1972 = 1L;
    uint8_t l_1997[7][6][1] = {{{0x3AL},{255UL},{0xA1L},{249UL},{0x3AL},{249UL}},{{0xA1L},{255UL},{0x3AL},{255UL},{0xA1L},{249UL}},{{0x3AL},{249UL},{0xA1L},{255UL},{0x3AL},{255UL}},{{0xA1L},{249UL},{0x3AL},{249UL},{0xA1L},{255UL}},{{0x3AL},{255UL},{0xA1L},{249UL},{0x3AL},{249UL}},{{0xA1L},{255UL},{0x3AL},{255UL},{0xA1L},{249UL}},{{0x3AL},{249UL},{0xA1L},{255UL},{0x3AL},{255UL}}};
    int32_t *l_1998[7][6][5] = {{{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955},{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955}},{{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955},{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955}},{{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955},{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955}},{{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955},{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955}},{{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955},{&g_568[3][4][3].f2,&l_1955,(void*)0,&l_1955,&g_568[3][4][3].f2},{&l_1955,&l_1955,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f2},{&g_568[3][4][3].f2,&g_568[3][4][3].f4,&g_92,&l_1955,&l_1955}},{{&g_568[3][4][3].f4,&g_568[3][4][3].f4,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f4},{(void*)0,&g_568[3][4][3].f4,&g_1768[2],&g_568[3][4][3].f2,&g_568[3][4][3].f4},{&g_568[3][4][3].f4,&g_568[3][4][3].f2,&g_1768[2],&g_568[3][4][3].f4,(void*)0},{&g_568[3][4][3].f4,&g_568[3][4][3].f4,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f4},{(void*)0,&g_568[3][4][3].f4,&g_1768[2],&g_568[3][4][3].f2,&g_568[3][4][3].f4},{&g_568[3][4][3].f4,&g_568[3][4][3].f2,&g_1768[2],&g_568[3][4][3].f4,(void*)0}},{{&g_568[3][4][3].f4,&g_568[3][4][3].f4,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f4},{(void*)0,&g_568[3][4][3].f4,&g_1768[2],&g_568[3][4][3].f2,&g_568[3][4][3].f4},{&g_568[3][4][3].f4,&g_568[3][4][3].f2,&g_1768[2],&g_568[3][4][3].f4,(void*)0},{&g_568[3][4][3].f4,&g_568[3][4][3].f4,&g_92,&g_568[3][4][3].f4,&g_568[3][4][3].f4},{(void*)0,&g_568[3][4][3].f4,&g_1768[2],&g_568[3][4][3].f2,&g_568[3][4][3].f4},{&g_568[3][4][3].f4,&g_568[3][4][3].f2,&g_1768[2],&g_568[3][4][3].f4,(void*)0}}};
    uint16_t ** const l_2046 = (void*)0;
    uint16_t *l_2096 = &g_1262[2][2];
    uint64_t ***l_2103 = &g_222;
    int64_t *l_2105[7][1];
    int32_t *l_2106 = &g_1308[0].f4;
    struct S0 *l_2109[2][5] = {{&g_568[3][4][3],&g_1308[0],(void*)0,&g_1308[0],&g_568[3][4][3]},{&g_568[3][4][3],&g_1308[0],(void*)0,&g_1308[0],&g_568[3][4][3]}};
    int64_t l_2140[3][6][1] = {{{0xBB3EAF973D5B7CE3LL},{0x19277C9E874C7CF3LL},{0x19277C9E874C7CF3LL},{0xBB3EAF973D5B7CE3LL},{0xC556B5AF7913E4DALL},{0xBB3EAF973D5B7CE3LL}},{{0x19277C9E874C7CF3LL},{0x19277C9E874C7CF3LL},{0xBB3EAF973D5B7CE3LL},{0xC556B5AF7913E4DALL},{0xBB3EAF973D5B7CE3LL},{0x19277C9E874C7CF3LL}},{{0x19277C9E874C7CF3LL},{0xBB3EAF973D5B7CE3LL},{0xC556B5AF7913E4DALL},{0xBB3EAF973D5B7CE3LL},{0x19277C9E874C7CF3LL},{0x19277C9E874C7CF3LL}}};
    union U1 ** const l_2181 = &g_591;
    int16_t l_2213 = 5L;
    int8_t ***l_2236 = (void*)0;
    struct S0 **l_2243[3][1][7] = {{{&l_2109[0][3],&g_2193,(void*)0,&g_2193,&l_2109[0][3],&l_2109[1][2],&l_2109[1][2]}},{{&l_2109[0][3],&g_2193,(void*)0,&g_2193,&l_2109[0][3],&l_2109[1][2],&l_2109[1][2]}},{{&l_2109[0][3],&g_2193,(void*)0,&g_2193,&l_2109[0][3],&l_2109[1][2],&l_2109[1][2]}}};
    struct S0 *l_2244 = &g_2245;
    struct S0 **l_2252 = (void*)0;
    int32_t l_2253 = 0xB81436CBL;
    struct S0 ** const l_2254 = &l_2244;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2105[i][j] = (void*)0;
    }
    if ((((((safe_rshift_func_int8_t_s_s((*p_24), 3)) , l_1940[0]) , (safe_sub_func_int32_t_s_s(((((**g_773) |= (safe_mul_func_int8_t_s_s(((--(**g_222)) && ((safe_lshift_func_uint16_t_u_u((l_1940[0] , (safe_sub_func_int16_t_s_s(((*g_773) == ((*l_1958) = ((*l_1957) = l_1956[0][0]))), l_1955))), p_25.f0)) & l_1955)), p_25.f1))) , (void*)0) != &p_24), l_1955))) , 5L) || l_1955))
    { 
        struct S0 *l_1960[5];
        struct S0 **l_1961 = &l_1960[1];
        int i;
        for (i = 0; i < 5; i++)
            l_1960[i] = (void*)0;
        (*l_1961) = l_1960[3];
    }
    else
    { 
        uint32_t l_1962 = 1UL;
        int32_t *l_1963 = &l_1955;
        uint16_t *l_1966 = (void*)0;
        uint16_t *l_1967 = &g_387;
        uint16_t *l_1971 = &g_672;
        uint64_t **l_1996 = &g_223;
        uint8_t **l_2021 = &g_762;
        uint8_t ***l_2020 = &l_2021;
        uint16_t l_2024[1];
        int16_t l_2025 = 5L;
        int32_t l_2077 = 0x52D8367FL;
        uint64_t l_2081[5][4] = {{1UL,18446744073709551610UL,18446744073709551610UL,1UL},{18446744073709551610UL,1UL,18446744073709551610UL,18446744073709551610UL},{1UL,1UL,1UL,1UL},{1UL,18446744073709551610UL,18446744073709551610UL,1UL},{18446744073709551610UL,1UL,18446744073709551610UL,18446744073709551610UL}};
        uint16_t l_2087 = 2UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2024[i] = 65535UL;
lbl_1983:
        (*g_341) = g_1973;
        for (g_386 = (-7); (g_386 > 28); g_386 = safe_add_func_int8_t_s_s(g_386, 3))
        { 
            int32_t l_1976 = (-3L);
            union U1 *l_1993 = (void*)0;
            int32_t l_2073 = 0x8E6285D4L;
            int32_t l_2074 = 0xF05D5CA5L;
            int32_t l_2076 = 7L;
            int32_t l_2079[4] = {0L,0L,0L,0L};
            uint16_t l_2084[6];
            uint16_t l_2090 = 0x4F55L;
            int i;
            for (i = 0; i < 6; i++)
                l_2084[i] = 6UL;
            if (l_1976)
            { 
                uint64_t l_1977 = 0xDC1A8F42B95EB3AALL;
                const int64_t *l_2012 = (void*)0;
                if ((((l_1977 ^ ((safe_div_func_int32_t_s_s((*l_1963), ((**g_773) |= (~l_1977)))) || (p_25.f0 = 1L))) & (1L && (0x82L == (safe_mod_func_int64_t_s_s(p_25.f1, l_1976))))) > l_1976))
                { 
                    union U1 **l_1992 = &g_591;
                    uint16_t ***l_1999 = (void*)0;
                    uint16_t ***l_2000 = &g_414;
                    int32_t l_2005 = 0x5D028A2DL;
                    int32_t l_2013 = 0xC6E55A21L;
                    if (l_1955)
                        goto lbl_1983;
                    if (g_368)
                        goto lbl_1983;
                    l_1998[6][4][3] = (*g_341);
                    l_2013 ^= ((((*l_2000) = (void*)0) == (void*)0) & (safe_rshift_func_int16_t_s_s(p_25.f1, (((((((((((safe_div_func_int16_t_s_s(0xAD27L, l_2005)) == (((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((p_22 < ((safe_sub_func_int64_t_s_s((0x808326C6650BDE4ALL == p_23), (*g_223))) & p_25.f1)) <= 0xD4B0L), 0x048501E0L)), 1)) , (*l_1963)) | 0x61L)) < (*p_24)) >= p_25.f3) && p_25.f4) , l_2012) == &g_368) != (*l_1963)) & p_25.f4) , g_1262[1][5]) == g_176))));
                    (*l_1963) = (safe_mul_func_uint8_t_u_u(0x2EL, 0x6FL));
                }
                else
                { 
                    return (*g_341);
                }
                for (g_1342 = 1; (g_1342 <= 5); g_1342 += 1)
                { 
                    (*l_1963) |= ((*g_1118) = (safe_mod_func_uint16_t_u_u(((*l_1967) = (safe_mul_func_int16_t_s_s(((*g_1187) , ((void*)0 != &l_1956[0][0])), ((void*)0 == l_2020)))), 4UL)));
                }
                (*g_1118) = (safe_div_func_int16_t_s_s(g_806, l_2024[0]));
                l_2025 = 0x710F3D97L;
            }
            else
            { 
                int32_t l_2041 = 0xF1E3B65AL;
                int32_t l_2044 = 1L;
                const int8_t l_2058 = 1L;
                uint32_t ** const l_2071 = &l_1956[0][0];
                int32_t l_2078 = (-1L);
                int32_t l_2080 = 0x598449BBL;
                for (g_902 = (-12); (g_902 > 14); g_902 = safe_add_func_uint8_t_u_u(g_902, 4))
                { 
                    int16_t *l_2028 = &g_772;
                    int32_t l_2031 = (-7L);
                    int8_t *l_2042 = (void*)0;
                    int8_t *l_2043[2][1];
                    uint16_t ***l_2045 = &g_414;
                    int32_t *l_2053 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2043[i][j] = (void*)0;
                    }
                    if (p_25.f3)
                        goto lbl_1983;
                    (*g_1118) = (((l_2044 ^= (((*l_1967) = (((((*l_2028) = (-1L)) && p_23) || (safe_rshift_func_uint16_t_u_s((1L && ((p_25.f1 ^ l_2031) >= ((safe_mod_func_int8_t_s_s((+((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*g_554) , (safe_sub_func_int8_t_s_s((*l_1963), l_2041))), (-1L))), 10)) , 0x611DL)), 9UL)) != 0x266B31ABL))), l_2031))) != 0x0E3EL)) | 0x03C5L)) >= l_1976) , (-1L));
                    l_1998[6][4][3] = l_2053;
                    (*l_1963) = (((((safe_add_func_uint16_t_u_u((((0x4BL | (safe_mul_func_int16_t_s_s(g_1432[4][4][1], l_2041))) && (**g_773)) , (8L || 0xEB83L)), g_1342)) <= 0xDEE203481A5A8F2DLL) , (*p_24)) && l_2058) != p_25.f3);
                }
                if (p_25.f4)
                    break;
                for (g_375 = 0; (g_375 < 6); ++g_375)
                { 
                    int8_t *l_2066 = &g_1582[0];
                    int32_t l_2072 = 0L;
                    int32_t l_2075[7] = {1L,3L,3L,1L,3L,3L,1L};
                    int i;
                    (*g_1118) = ((*l_1963) = ((*p_24) < ((safe_unary_minus_func_uint32_t_u(((*g_774) = (((g_592[0].f3 = ((safe_add_func_int8_t_s_s(((*l_2066) = (safe_sub_func_int64_t_s_s((-1L), 18446744073709551615UL))), ((***l_2020) = (safe_add_func_uint32_t_u_u((p_23 > (((p_25.f4 | (l_2071 != &l_1959)) & 1L) != 0xB6F942E8L)), 4294967290UL))))) > (*l_1963))) & g_77) == 0UL)))) , 0xF0L)));
                    l_2074 ^= (l_2073 ^= ((*g_1335) == (l_2072 , (void*)0)));
                    --l_2081[2][2];
                    if (p_25.f4)
                        break;
                }
                return (***g_1406);
            }
            --l_2084[1];
            (*l_1963) = l_2079[0];
            ++l_2087;
            --l_2090;
        }
    }
lbl_2168:
    --g_2093;
    if ((((*p_24) > ((((--(*l_2096)) ^ ((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((((((g_212.f0 = (((*g_774) = p_25.f0) >= ((((*g_223) = (*g_223)) <= ((l_2103 != (void*)0) < (((~(p_22 > (p_25.f4 ^ 5UL))) , p_23) == 18446744073709551615UL))) & p_22))) , (void*)0) != (void*)0) , p_25.f1) , (*l_1957)) == (void*)0) < p_25.f1), 0xDB80L)), 0x27684818L)) & p_25.f1)) & g_1341[6][1][4]) != p_22)) ^ 250UL))
    { 
        struct S0 *l_2107 = &g_1308[0];
        int32_t *l_2110 = &g_568[3][4][3].f4;
        union U1 *l_2116 = &g_2117;
        int32_t l_2119 = 0xF5F5D054L;
        int32_t l_2120[5];
        uint16_t l_2121 = 0x66B4L;
        uint8_t **l_2161[7][3];
        uint8_t ***l_2160 = &l_2161[0][0];
        uint16_t l_2178 = 0x722CL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_2120[i] = (-1L);
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_2161[i][j] = &g_762;
        }
        (***g_1406) = l_2106;
        for (g_145 = 0; (g_145 <= 2); g_145 += 1)
        { 
            uint16_t l_2111[1][2][2] = {{{65535UL,65535UL},{65535UL,65535UL}}};
            int i, j, k;
            for (g_1367 = 0; (g_1367 <= 2); g_1367 += 1)
            { 
                int32_t *l_2114 = &g_1768[0];
                for (g_386 = 2; (g_386 >= 0); g_386 -= 1)
                { 
                    (***g_1406) = (void*)0;
                }
                if (p_25.f4)
                { 
                    struct S0 **l_2108 = &l_2107;
                    int i;
                    g_1768[g_1367] = (((*l_2108) = l_2107) != l_2109[0][1]);
                    return l_2110;
                }
                else
                { 
                    if (p_23)
                        break;
                    l_2111[0][1][1]--;
                }
                for (g_1585 = 0; (g_1585 <= 2); g_1585 += 1)
                { 
                    (***g_1406) = l_2114;
                    if (g_61)
                        goto lbl_2143;
                }
            }
            for (l_1955 = 2; (l_1955 >= 0); l_1955 -= 1)
            { 
                union U1 **l_2115 = &g_591;
                int32_t *l_2118[3][5][1] = {{{(void*)0},{&g_17},{(void*)0},{&g_17},{(void*)0}},{{&g_17},{(void*)0},{&g_17},{(void*)0},{&g_17}},{{(void*)0},{&g_17},{(void*)0},{&g_17},{(void*)0}}};
                int i, j, k;
                (*l_2115) = &g_59[3][6][0];
                for (p_25.f2 = 0; (p_25.f2 <= 2); p_25.f2 += 1)
                { 
                    int i, j, k;
                    l_2116 = &g_59[0][5][1];
                    if (g_976[p_25.f2][l_1955][(l_1955 + 3)])
                        break;
                    if (p_25.f4)
                        continue;
                    return l_2118[0][0][0];
                }
            }
        }
        --l_2121;
lbl_2143:
        (*g_1118) ^= (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(p_25.f4, (((*g_774) = (safe_sub_func_uint64_t_u_u((*g_554), (safe_rshift_func_uint8_t_u_s((*l_2110), ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_2140[0][4][0], ((safe_lshift_func_uint8_t_u_s((((((0xF03A0EC059F68DDFLL != ((*g_515) = (6UL | g_1353))) , p_22) | (*l_2110)) == (*l_2110)) , 1UL), (*p_24))) || 0xE8FDBD6B44C5C528LL))), p_25.f2)) && 0xFE7BA5A761CF1831LL) <= g_568[3][4][3].f4) > p_25.f1), (*l_2110))), 0x87F1L)) > (*l_2110))))))) & p_25.f2))), (*p_24))) != p_25.f2) <= p_25.f4);
        for (g_386 = 0; (g_386 <= 4); g_386 += 1)
        { 
            union U1 l_2156 = {0};
            uint8_t **l_2159 = &g_762;
            uint8_t ***l_2158[6][7][6] = {{{&l_2159,&l_2159,(void*)0,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,(void*)0,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,(void*)0,&l_2159},{&l_2159,(void*)0,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,(void*)0,(void*)0,&l_2159,(void*)0,(void*)0}},{{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,(void*)0,&l_2159},{&l_2159,(void*)0,&l_2159,(void*)0,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159}},{{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,(void*)0},{&l_2159,&l_2159,(void*)0,&l_2159,(void*)0,&l_2159},{&l_2159,(void*)0,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,(void*)0,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,(void*)0,&l_2159,(void*)0,(void*)0,&l_2159}},{{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159}},{{&l_2159,(void*)0,(void*)0,&l_2159,(void*)0,(void*)0},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,(void*)0,&l_2159},{&l_2159,(void*)0,&l_2159,(void*)0,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159}},{{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,(void*)0,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,(void*)0,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,(void*)0,&l_2159,&l_2159},{(void*)0,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159},{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159}}};
            uint8_t ****l_2157[4];
            int16_t *l_2165[5][1][4] = {{{(void*)0,&g_1584,&g_1584,(void*)0}},{{&g_160,&g_1584,&g_160,&g_1584}},{{&g_1584,&g_386,&g_160,&g_160}},{{&g_160,&g_160,&g_1584,&g_160}},{{(void*)0,&g_386,(void*)0,&g_1584}}};
            int32_t l_2166 = 0x937F410FL;
            uint16_t *l_2167 = &g_672;
            int64_t l_2174 = 0xEAB7AEF5DF790118LL;
            int32_t l_2175 = (-4L);
            int32_t l_2176 = 0x7210D2BFL;
            int32_t l_2177 = (-8L);
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2157[i] = &l_2158[3][4][1];
            (*g_1118) = (((0x747DL && ((*l_2167) = ((*l_2096) = ((l_2166 = (p_25.f0 ^= (!(((safe_add_func_int8_t_s_s(0x46L, ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((*g_554))) , (((l_2156 , (l_2160 = (void*)0)) != (void*)0) != ((*l_2110) = (~(g_1584 = ((safe_rshift_func_int8_t_s_u(0L, 1)) >= (*l_2110))))))), (*p_24))), l_2166)), (**g_395))), 7)) || (*g_515)))) && p_25.f3) | (*g_223))))) , (*l_2106))))) | g_102) || (*l_2110));
            for (g_901 = 0; (g_901 <= 1); g_901 += 1)
            { 
                const uint16_t ** const *l_2170 = (void*)0;
                const uint16_t ** const **l_2169 = &l_2170;
                const uint16_t ** const ***l_2171 = (void*)0;
                const uint16_t ** const ***l_2172 = &l_2169;
                int32_t l_2173[7][4][6] = {{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)}},{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)}},{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)}},{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)}},{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)}},{{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),(-9L),0x8D5F89BFL,(-9L)},{(-9L),0x8D5F89BFL,(-9L),0L,(-9L),0L}},{{0L,(-9L),0L,0L,(-9L),0L},{0L,(-9L),0L,0L,(-9L),0L},{0L,(-9L),0L,0L,(-9L),0L},{0L,(-9L),0L,0L,(-9L),0L}}};
                int32_t l_2190[2][6] = {{0L,0xE9659312L,0L,0L,0xE9659312L,0L},{0L,0xE9659312L,0L,0L,0xE9659312L,0L}};
                union U1 **l_2191 = (void*)0;
                int i, j, k;
                if (g_375)
                    goto lbl_2168;
                (*l_2172) = l_2169;
                l_2178++;
                p_25.f4 &= (((((l_2181 == ((safe_sub_func_uint64_t_u_u(((l_2175 && ((((*l_2167)++) || ((*l_2096) ^= (safe_add_func_int64_t_s_s((0x51C9D1B7L ^ 4294967293UL), ((*g_223) ^= 0x7FB2E92A555F3EB4LL))))) || ((0x2670F233591DEA37LL >= (safe_add_func_uint8_t_u_u((g_386 | 0x6FL), l_2190[1][2]))) > l_2190[1][2]))) == 0x857A3273L), p_25.f1)) , l_2191)) & l_2190[1][2]) != g_602) == (-9L)) <= p_25.f0);
                for (g_1084 = 0; (g_1084 <= 1); g_1084 += 1)
                { 
                    struct S0 **l_2192[1][1][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_2192[i][j][k] = &l_2109[0][1];
                        }
                    }
                    (*g_341) = (***g_1406);
                    if (g_1341[(g_386 + 1)][g_901][(g_1084 + 2)])
                        break;
                    g_2193 = &p_25;
                    p_25.f4 |= g_1341[(g_386 + 1)][g_901][g_386];
                }
            }
        }
    }
    else
    { 
        uint16_t l_2198[4][6] = {{0x7416L,0x7416L,0x7416L,0x7416L,0x7416L,0x7416L},{0x7416L,0x7416L,0x7416L,0x7416L,0x7416L,0x7416L},{0x7416L,0x7416L,0x7416L,0x7416L,0x7416L,0x7416L},{0x7416L,0x7416L,0x7416L,0x7416L,0x7416L,0x7416L}};
        int32_t l_2210[6];
        const uint32_t *l_2239 = (void*)0;
        int i, j;
        for (i = 0; i < 6; i++)
            l_2210[i] = 6L;
        for (g_1503 = 0; (g_1503 <= (-26)); g_1503--)
        { 
            int8_t l_2197 = 0xD2L;
            uint64_t ***l_2199 = &g_222;
            int32_t *l_2209 = &g_1768[1];
            uint32_t l_2214 = 0x69D18289L;
            if (l_2197)
            { 
                uint32_t l_2208[7] = {0x6AE124DBL,0x6AE124DBL,0x6AE124DBL,0x6AE124DBL,0x6AE124DBL,0x6AE124DBL,0x6AE124DBL};
                int32_t l_2211 = 0L;
                int32_t l_2212[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                (**g_1407) = l_2209;
                l_2214--;
                return (**g_1407);
            }
            else
            { 
                (*g_341) = l_2209;
                return (*g_341);
            }
        }
        (***g_1406) = &l_2210[2];
        (*g_1118) = (*g_342);
        (*g_341) = func_53((**l_2181), l_2198[3][4], (safe_sub_func_uint64_t_u_u(((***l_2103) &= (l_2236 == l_2236)), 0UL)), (*g_2193), (((safe_mul_func_int8_t_s_s((**g_395), (*p_24))) < 0x7A5FL) ^ p_25.f1));
        (*g_1118) = ((void*)0 == l_2239);
    }
    (*l_2106) = (((+((safe_rshift_func_uint16_t_u_s((((&g_1308[0] == (g_2193 = (l_2244 = (void*)0))) , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((--(*g_223)) != (l_2252 == (l_2253 , l_2254))), (p_25.f4 ^ (-1L)))), 2))) , p_25.f3), 3)) != g_13)) , 0x3B6212593EF2A568LL) < 18446744073709551615UL);
    return (*g_341);
}



static int16_t  func_31(int32_t * const  p_32, int32_t * p_33)
{ 
    uint8_t l_1204 = 1UL;
    union U1 l_1213[1][7] = {{{0},{0},{0},{0},{0},{0},{0}}};
    int32_t l_1228[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
    const int64_t l_1235 = 0L;
    int16_t l_1265 = 0x1C9CL;
    int32_t ***l_1298 = &g_341;
    uint32_t l_1337 = 0xA76B3EBBL;
    const int8_t *l_1383[4][4][3] = {{{&g_671,&g_671,&g_671},{&g_806,&g_806,&g_671},{(void*)0,&g_128,&g_128},{&g_159,&g_806,&g_806}},{{&g_128,&g_671,&g_128},{&g_159,&g_15,&g_159},{(void*)0,&g_15,&g_128},{&g_806,&g_806,&g_806}},{{&g_671,&g_15,&g_128},{&g_806,&g_15,&g_671},{&g_671,&g_671,&g_671},{&g_806,&g_806,&g_671}},{{(void*)0,&g_128,&g_128},{&g_159,&g_806,&g_806},{&g_128,&g_671,&g_128},{&g_159,&g_15,&g_159}}};
    uint8_t l_1428 = 0UL;
    int64_t l_1508 = 0x72D30BFE9E42ED68LL;
    int64_t l_1553[6][1][5] = {{{0xF05B4967125C3B26LL,0x600DCAA762148968LL,8L,8L,0x600DCAA762148968LL}},{{(-6L),(-1L),2L,0x600DCAA762148968LL,0x515C256C8668DA06LL}},{{(-1L),8L,2L,0L,2L}},{{0x515C256C8668DA06LL,0x515C256C8668DA06LL,8L,(-6L),0L}},{{(-1L),0L,0xF05B4967125C3B26LL,(-6L),(-6L)}},{{(-6L),0xD0530A6D6DD946D1LL,(-6L),0L,0L}}};
    uint16_t *l_1597 = &g_1262[2][2];
    struct S0 l_1601 = {0xAE0858C3B9F2149ELL,82,0xA7FDC9BFL,40,0xCEA46C02L};
    union U1 **l_1721[4][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{&g_591,&g_591,&g_591}},{{(void*)0,(void*)0,(void*)0}},{{&g_591,&g_591,&g_591}}};
    uint32_t l_1744 = 1UL;
    uint32_t l_1759 = 4294967295UL;
    union U1 l_1760 = {0};
    const int32_t l_1798 = (-1L);
    struct S0 **l_1803 = (void*)0;
    int8_t ***l_1845 = &g_650;
    const int32_t *l_1928 = &l_1228[4];
    int i, j, k;
lbl_1790:
    for (g_772 = 9; (g_772 >= 2); g_772 = safe_sub_func_int64_t_s_s(g_772, 8))
    { 
        return g_212.f3;
    }
    for (g_375 = 10; (g_375 == 25); g_375++)
    { 
        int32_t l_1209 = 5L;
        int32_t l_1229[4][5] = {{0xC22EEF30L,0x1BBD8797L,0xC22EEF30L,0xFC4BA96BL,0xFC4BA96BL},{0xC22EEF30L,0x1BBD8797L,0xC22EEF30L,0xFC4BA96BL,0xFC4BA96BL},{0xC22EEF30L,2L,0x04362BA1L,0xC22EEF30L,0xC22EEF30L},{0x04362BA1L,2L,0x04362BA1L,0xC22EEF30L,0xC22EEF30L}};
        int8_t *l_1246 = &g_128;
        struct S0 *l_1307 = &g_1308[0];
        const int32_t *l_1331 = &g_399;
        const int32_t **l_1330 = &l_1331;
        uint32_t *l_1347[7];
        union U1 l_1348 = {0};
        int64_t l_1349 = 0xAED4B7C9C8D6C5D5LL;
        int32_t **l_1388[6] = {&g_1336,&g_1336,&g_1336,&g_1336,&g_1336,&g_1336};
        int8_t ****l_1409[2];
        uint64_t l_1532 = 0x40D61D7C4FAF4699LL;
        const uint16_t *l_1598 = &g_375;
        int32_t l_1642 = 1L;
        union U1 **l_1723 = &g_591;
        const int16_t l_1737 = 0xB234L;
        uint8_t l_1789 = 0xBFL;
        uint8_t l_1839 = 254UL;
        int32_t l_1846 = 0x9E46039DL;
        int64_t l_1872 = 0xE922DBDEB05B29FFLL;
        uint16_t l_1876 = 65532UL;
        uint64_t **l_1932 = &g_554;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1347[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1409[i] = &g_394;
        for (g_204 = 0; (g_204 <= 12); g_204++)
        { 
            int8_t *** const *l_1215 = &g_394;
            int8_t *** const **l_1214 = &l_1215;
            int32_t l_1216[3];
            int32_t l_1290[3];
            int32_t ***l_1299 = &g_341;
            int64_t *l_1359 = &l_1349;
            int32_t *l_1370 = &l_1290[0];
            uint64_t l_1371 = 0UL;
            const int32_t **l_1387 = (void*)0;
            int32_t ***l_1389 = &l_1388[5];
            union U1 l_1415 = {0};
            uint16_t **l_1424 = (void*)0;
            uint32_t l_1437 = 0xCDB5D56EL;
            uint32_t * const * const l_1545 = &g_774;
            int16_t l_1583 = 1L;
            int8_t l_1641[4][3] = {{0x37L,0x1BL,0x1BL},{0L,0x8CL,0x8CL},{0x37L,0x1BL,0x1BL},{0L,0x8CL,0x8CL}};
            struct S0 l_1644 = {0x12CAAD969C43BE92LL,-32,0x2BD16D80L,38,-4L};
            int i, j;
            for (i = 0; i < 3; i++)
                l_1216[i] = 0x3656B3B2L;
            for (i = 0; i < 3; i++)
                l_1290[i] = 0x7EF8980AL;
        }
        (***g_1406) = p_33;
        for (g_1585 = 0; (g_1585 > (-1)); --g_1585)
        { 
            uint64_t l_1653[2];
            uint8_t *l_1658 = &g_1230;
            const int8_t l_1659 = (-4L);
            int32_t l_1662 = 0x0A5AC5A9L;
            int32_t l_1663 = 0xFFD5F152L;
            int32_t *l_1669 = &l_1663;
            int32_t l_1720 = 0xAC9821DCL;
            int32_t l_1742 = 0x89A44BF9L;
            int i;
            for (i = 0; i < 2; i++)
                l_1653[i] = 18446744073709551615UL;
            if ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_1349 || ((((l_1349 | (**g_773)) & ((((l_1653[1] <= ((2UL && ((((((*g_554) != (safe_add_func_uint8_t_u_u(((*l_1658) = ((*g_762) = ((((safe_sub_func_uint64_t_u_u((***l_1298), 0xAACF3A37E6719DDFLL)) != 0x3FA7L) <= (-7L)) >= (***l_1298)))), (***l_1298)))) & l_1229[1][3]) , (*g_1118)) , (***g_394)) != 0x8FL)) && l_1532)) > (*g_223)) || l_1659) && 4L)) > 0L) <= l_1659)), (*p_32))), g_1308[0].f3)))
            { 
                int32_t *l_1660 = &l_1601.f2;
                int32_t *l_1661[7][4][1] = {{{(void*)0},{&g_92},{(void*)0},{(void*)0}},{{&g_92},{(void*)0},{(void*)0},{&g_92}},{{(void*)0},{(void*)0},{&g_92},{(void*)0}},{{(void*)0},{&g_92},{(void*)0},{(void*)0}},{{&g_92},{(void*)0},{(void*)0},{&g_92}},{{(void*)0},{(void*)0},{&g_92},{(void*)0}},{{(void*)0},{&g_92},{(void*)0},{(void*)0}}};
                uint32_t l_1664 = 0xD3466098L;
                int i, j, k;
                --l_1664;
            }
            else
            { 
                uint16_t l_1674 = 0xDDBBL;
                int32_t *l_1713 = &l_1642;
                for (l_1508 = 0; (l_1508 <= (-10)); l_1508--)
                { 
                    int16_t *l_1675 = &g_160;
                    int32_t l_1694 = 0x340C49EAL;
                    (*g_1118) |= (***g_1407);
                    (***g_1406) = (l_1669 = p_33);
                    (*p_32) ^= (safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((*l_1675) = l_1674), (safe_mul_func_int16_t_s_s(l_1674, (safe_div_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((!(safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0xE7L, (((1UL == (!(((*l_1669) && ((*l_1597) = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_1694, (safe_mul_func_uint16_t_u_u(0UL, (***l_1298))))), (***l_1298))), 0x3CL)))) | l_1349))) & 1UL) != (*l_1669)))), (*l_1669)))), l_1229[1][3])) <= l_1694) ^ l_1229[1][3]), (*l_1669))))))) > l_1642), l_1674));
                }
                (*l_1713) |= ((0x4759L & ((safe_mul_func_uint16_t_u_u((((*g_762) = (safe_unary_minus_func_int16_t_s(((safe_mod_func_uint64_t_u_u((l_1674 < ((((*g_515) = ((safe_mod_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((*l_1669) == l_1674), ((*p_32) = (safe_add_func_uint16_t_u_u((+(*l_1669)), ((safe_mul_func_uint16_t_u_u(((***l_1298) ^ (safe_sub_func_int64_t_s_s(((l_1601.f2 = ((((*l_1597) &= (***l_1298)) || 0x15CAL) == (*l_1669))) >= l_1674), (*l_1669)))), 0x5765L)) < l_1229[1][4])))))) ^ l_1674), l_1674)) < l_1229[1][3])) != (***l_1298)) <= 0x3C2FL)), 0xD67AABCB8636C6B4LL)) > (**g_650))))) <= 8UL), (*l_1669))) , g_77)) > l_1229[3][4]);
                (*l_1713) = (*p_32);
                for (g_386 = 0; (g_386 <= (-10)); g_386 = safe_sub_func_uint8_t_u_u(g_386, 1))
                { 
                    union U1 **l_1722 = &g_591;
                    int16_t *l_1724 = &g_1584;
                    uint8_t *l_1733[7] = {&g_1317[0],&g_1586,&g_1317[0],&g_1317[0],&g_1586,&g_1317[0],&g_1317[0]};
                    int64_t *l_1738 = (void*)0;
                    int64_t *l_1739 = &l_1349;
                    int32_t l_1740 = 0xD86784DEL;
                    struct S0 l_1741 = {-1L,51,0xBC116FBFL,50,0x312D2D70L};
                    int32_t *l_1743[5][7] = {{(void*)0,(void*)0,&l_1229[1][3],(void*)0,(void*)0,&l_1229[1][3],(void*)0},{&l_1229[1][0],&l_1209,&l_1209,&l_1229[1][0],&l_1209,&l_1209,&l_1229[1][0]},{&l_1741.f2,(void*)0,&l_1741.f2,&l_1741.f2,(void*)0,&l_1741.f2,&l_1741.f2},{&l_1229[1][0],&l_1229[1][0],&l_1662,&l_1229[1][0],&l_1229[1][0],&l_1662,&l_1229[1][0]},{(void*)0,&l_1741.f2,&l_1741.f2,(void*)0,&l_1741.f2,&l_1741.f2,(void*)0}};
                    int i, j;
                    (***g_1406) = l_1713;
                    l_1744++;
                    return g_264;
                }
                for (l_1349 = 23; (l_1349 != (-22)); --l_1349)
                { 
                    int32_t ***l_1749 = &l_1388[4];
                    int32_t l_1767 = 0x0BC058A7L;
                    uint32_t l_1769 = 4294967290UL;
                    (*l_1749) = &g_1336;
                    (*g_1118) &= ((((((safe_sub_func_int32_t_s_s((((((!(((safe_lshift_func_int16_t_s_u(((*g_515) & ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((((0L | (l_1759 &= (-5L))) == (l_1760 , (((*g_1187) = 7UL) , (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(g_1308[0].f1, ((((*l_1658) = (safe_add_func_uint64_t_u_u((((**g_773) = 4294967290UL) ^ (***l_1298)), (***l_1298)))) & l_1642) & g_1308[0].f2))) , (*l_1669)), l_1767))))) == 6L) <= (*l_1713)) > (*p_33)), (*l_1669))), l_1737)) < g_1768[1])), (*l_1669))) < l_1769) <= (*l_1713))) || (***l_1298)) > 0x13AC9CDBL) == 0x3B68L) <= (*l_1669)), 0x7A826D25L)) != 0x2A958E6F29A66C1ELL) , (*l_1669)) ^ (*l_1713)) != 0xE6L) < (*g_223));
                    l_1767 = ((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_1532, (*l_1713))), 3)) ^ 0xF70227D9L);
                }
            }
            for (g_77 = 0; (g_77 <= 58); g_77++)
            { 
                for (g_799 = 28; (g_799 == 15); g_799 = safe_sub_func_int8_t_s_s(g_799, 4))
                { 
                    return g_602;
                }
            }
            l_1601.f4 ^= (*p_33);
        }
        if ((***l_1298))
            continue;
        if (((*g_1118) = (***g_1407)))
        { 
            uint8_t l_1787 = 0x67L;
            int8_t ***l_1788 = &g_395;
            for (l_1349 = 0; (l_1349 != (-26)); --l_1349)
            { 
                union U1 l_1791 = {0};
                int32_t l_1802[7][7];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1802[i][j] = 1L;
                }
                if ((**g_341))
                { 
                    uint16_t *l_1784 = &g_672;
                    int32_t l_1796 = (-1L);
                    int16_t *l_1797 = &g_772;
                    struct S0 l_1799 = {-6L,-28,1L,19,-1L};
                    (**l_1298) = (**g_1407);
                    (*g_1118) &= ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x6222L, ((void*)0 == &g_602))), ((*l_1784) = ((*l_1597) = g_1440)))) , ((((*g_774) = (((*g_515) = (safe_lshift_func_int16_t_s_s(l_1787, ((((void*)0 != l_1788) || 7L) < l_1789)))) , 0xA31D1A86L)) >= (***l_1298)) | l_1789));
                    if (g_386)
                        goto lbl_1790;
                    (*g_341) = p_33;
                }
                else
                { 
                    int32_t **l_1800 = (void*)0;
                    int32_t **l_1801 = &g_1118;
                    (*l_1801) = ((*l_1307) , p_32);
                    if (l_1802[1][6])
                        continue;
                }
            }
            for (g_1584 = 0; (g_1584 <= 0); g_1584 += 1)
            { 
                const struct S0 l_1812 = {0xF2E73C3D50CE8D23LL,-16,0xB06D981FL,28,0x90FFA002L};
                int32_t ** const *l_1830 = (void*)0;
                int64_t *l_1831 = (void*)0;
                int32_t l_1832 = 1L;
                int32_t l_1838 = 0L;
                for (g_384 = 0; (g_384 >= 0); g_384 -= 1)
                { 
                    uint8_t *l_1806 = &g_1230;
                    struct S0 l_1809 = {0x194A2346E22C468DLL,-56,-1L,72,1L};
                    int i, j, k;
                    if (g_1582[g_1584])
                        break;
                    (*g_1118) &= (((g_1582[(g_384 + 1)] , l_1803) != (void*)0) || ((3UL < (0xB1L > (safe_sub_func_uint8_t_u_u((++(*l_1806)), (l_1809 , ((***l_1298) >= 255UL)))))) <= (-10L)));
                    (*g_1118) = ((*g_591) , ((void*)0 != (*g_1406)));
                }
                for (g_102 = 0; (g_102 <= 0); g_102 += 1)
                { 
                    int32_t *l_1829 = &g_1341[0][1][0];
                    int32_t ** const l_1828 = &l_1829;
                    int32_t ** const *l_1827 = &l_1828;
                    int32_t ** const **l_1826[6] = {&l_1827,&l_1827,&l_1827,&l_1827,&l_1827,&l_1827};
                    int32_t *l_1833 = (void*)0;
                    int32_t *l_1834 = &l_1229[3][0];
                    int32_t *l_1835 = &l_1229[1][3];
                    int32_t *l_1836 = &g_568[3][4][3].f2;
                    int32_t *l_1837[7][7] = {{&g_92,&g_92,&l_1228[1],&l_1601.f2,&g_204,(void*)0,&l_1832},{&l_1601.f2,&l_1209,&l_1601.f2,&g_92,&l_1832,(void*)0,(void*)0},{&g_204,&g_1768[1],&l_1229[1][4],&g_1768[1],&g_204,&g_92,&l_1601.f2},{&g_204,&l_1228[1],&l_1229[1][4],&g_1308[0].f2,&g_1768[1],&g_212.f2,(void*)0},{&g_1308[0].f2,&g_1768[0],&l_1601.f2,&g_212.f2,&g_212.f2,&l_1601.f2,&g_1768[0]},{&g_204,&g_1308[0].f2,&l_1228[1],&l_1601.f2,&l_1209,&l_1601.f2,&g_92},{&g_204,(void*)0,&l_1832,&l_1229[1][4],&l_1601.f4,&g_212.f2,&l_1601.f4}};
                    int i, j;
                }
            }
            return (***l_1298);
        }
        else
        { 
            uint8_t l_1844 = 0x61L;
            int32_t l_1854 = 0x31174E8AL;
            int32_t l_1870 = 7L;
            int32_t l_1873 = 0x6C2F95BDL;
            int32_t l_1874[6][7] = {{1L,0x97B395FCL,(-1L),0x69E9CB8DL,0L,(-1L),0x06B91DA9L},{0x0F8F85B3L,0x89D404B5L,(-1L),0x06B91DA9L,1L,(-1L),(-1L)},{(-1L),(-10L),(-1L),(-10L),(-1L),1L,(-3L)},{(-3L),(-10L),9L,0x97B395FCL,0x69E9CB8DL,(-1L),1L},{(-10L),0x89D404B5L,0x69E9CB8DL,(-1L),(-1L),(-1L),(-1L)},{(-3L),0x97B395FCL,(-3L),(-3L),(-1L),1L,(-1L)}};
            int64_t l_1875[4] = {(-1L),(-1L),(-1L),(-1L)};
            uint32_t l_1883 = 0x7004314BL;
            const uint64_t *l_1914 = &l_1532;
            const uint64_t **l_1913 = &l_1914;
            uint64_t l_1925 = 18446744073709551612UL;
            int i, j;
            for (g_92 = 24; (g_92 < 1); g_92--)
            { 
                union U1 l_1852 = {0};
                uint8_t *l_1853 = (void*)0;
                int32_t l_1865 = 0x36C6A520L;
                int16_t *l_1866[2][3][4] = {{{&g_160,&g_299,&g_160,&g_160},{&g_160,&g_160,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1584,&l_1265}},{{(void*)0,&g_299,(void*)0,(void*)0},{&g_160,&l_1265,&g_160,(void*)0},{&g_160,&l_1265,&g_1584,(void*)0}}};
                int32_t l_1871[2][4];
                int32_t *l_1879 = &l_1873;
                int32_t *l_1880 = &g_212.f2;
                int32_t *l_1881[3][5];
                int8_t l_1882 = 0x0AL;
                uint32_t l_1889 = 0x80954D87L;
                int64_t l_1906[3];
                struct S0 *l_1907[3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1871[i][j] = 0xDFB036D0L;
                }
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1881[i][j] = &l_1854;
                }
                for (i = 0; i < 3; i++)
                    l_1906[i] = 0xD732E9ACAD74C256LL;
                for (i = 0; i < 3; i++)
                    l_1907[i] = &g_568[3][4][3];
                l_1854 = (l_1844 == ((((((void*)0 != l_1845) , (((l_1846 & (-1L)) ^ (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((~(((*g_762) = (l_1229[1][3] &= ((***l_1298) || ((l_1852 , 18446744073709551615UL) != 0x9F762FB73D8196E6LL)))) != l_1839)) & 0L), 65526UL)), l_1532))) != 0x1CL)) || (**g_395)) || l_1789) == (**g_650)));
                if (((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((l_1229[2][2] = (l_1852 , (safe_div_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u((((~((1L == ((safe_unary_minus_func_int64_t_s(((*g_1407) != &p_32))) & g_280[2])) != 0xE1EDBC3EDBE1912ELL)) || l_1865) && l_1865), l_1846)) | l_1865) , 0x5F03F73BL), 0xD68E5747L)))), g_1867)) ^ 0xD0932778DC048312LL), 0x08D06806L)) != 4294967294UL))
                { 
                    return g_77;
                }
                else
                { 
                    int32_t *l_1868 = &l_1209;
                    int32_t *l_1869[1][3][4] = {{{&l_1229[1][3],(void*)0,&l_1865,(void*)0},{(void*)0,&g_568[3][4][3].f2,&l_1865,&l_1865},{&l_1229[1][3],&l_1229[1][3],(void*)0,&l_1865}}};
                    int i, j, k;
                    --l_1876;
                }
                --l_1883;
                if ((((safe_div_func_int16_t_s_s(g_1888[4][1][2], ((l_1889 | ((((safe_sub_func_uint64_t_u_u((255UL > (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((l_1874[4][0] = (safe_mul_func_int16_t_s_s(((((((*g_774) & ((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(l_1209, ((*g_515) |= ((safe_mul_func_uint8_t_u_u(g_212.f3, (***l_1298))) <= g_135[2][1])))), l_1876)), (***l_1298))) && g_280[1])) , (***g_1407)) == 0x20F70949L) <= (***l_1298)) > 255UL), 0x360AL))) , (**g_773)), (-1L))), (*l_1879)))), 18446744073709551615UL)) , (*p_32)) | l_1854) && 0xC356884EL)) & 1UL))) , 0xD72008EEL) ^ l_1906[1]))
                { 
                    struct S0 **l_1908 = &l_1907[0];
                    const uint8_t *l_1923 = &l_1428;
                    const uint8_t **l_1922 = &l_1923;
                    (*l_1908) = l_1907[2];
                    if ((***g_1407))
                        continue;
                    (*l_1879) |= (safe_lshift_func_uint8_t_u_s((((((safe_div_func_uint64_t_u_u((*g_223), 1L)) , ((*g_774) = (l_1913 != &g_223))) , ((safe_mod_func_int32_t_s_s(((*p_33) <= (((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((safe_sub_func_int32_t_s_s(((-7L) > ((*g_591) , 0x0C379D01L)), 0x0AC846EEL)) < g_1341[0][1][0]) < 0x0188FDD1L))), 1UL)) != 0x93L) || 251UL)), 8L)) && (*g_774))) , l_1922) != &g_762), l_1874[4][0]));
                    (*g_341) = (***g_1406);
                }
                else
                { 
                    int32_t l_1924[7][6] = {{0x879FBAF7L,(-5L),0x5C1739A0L,0x5C1739A0L,(-5L),0x879FBAF7L},{0x879FBAF7L,0x5C1739A0L,0L,(-5L),(-5L),0L},{(-5L),(-5L),0L,0x5C1739A0L,0x879FBAF7L,0x879FBAF7L},{(-5L),0x5C1739A0L,0x5C1739A0L,(-5L),0x879FBAF7L,0L},{0x879FBAF7L,(-5L),0x5C1739A0L,0x5C1739A0L,(-5L),0x879FBAF7L},{0x879FBAF7L,0x5C1739A0L,0L,(-5L),(-5L),0L},{(-5L),(-5L),0L,0x5C1739A0L,0x879FBAF7L,0x879FBAF7L}};
                    const int32_t *l_1929 = &l_1870;
                    int i, j;
                    l_1642 = (*p_32);
                    if (l_1924[6][2])
                        break;
                    --l_1925;
                    l_1929 = l_1928;
                }
                for (l_1428 = 0; (l_1428 <= 36); l_1428++)
                { 
                    uint64_t ***l_1933 = &l_1932;
                    (*l_1933) = l_1932;
                    (*l_1880) &= (safe_sub_func_uint32_t_u_u(l_1737, ((**g_773) = (1L < l_1872))));
                }
            }
        }
    }
    return g_160;
}



static int32_t * func_34(uint16_t  p_35, uint32_t  p_36, uint8_t  p_37)
{ 
    uint16_t l_579 = 65535UL;
    uint64_t **l_586 = (void*)0;
    uint8_t *l_628 = (void*)0;
    int32_t l_637 = 5L;
    int32_t l_664 = 0x9B2C12CDL;
    int32_t l_670[6];
    int16_t l_712 = 0x39EAL;
    uint32_t *l_720 = &g_205;
    uint32_t ** const l_719 = &l_720;
    struct S0 *l_732[7][2][2] = {{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}},{{(void*)0,&g_568[3][4][3]},{(void*)0,(void*)0}}};
    const uint16_t l_733 = 0UL;
    union U1 l_734 = {0};
    const int8_t ****l_780 = (void*)0;
    union U1 l_788 = {0};
    struct S0 l_845 = {0x3627CDDEE53671F7LL,35,0xDC1B845DL,40,1L};
    int32_t l_866 = (-2L);
    int8_t **l_876 = &g_14;
    int8_t *** const l_875 = &l_876;
    int8_t *** const *l_874[6][5][4] = {{{&l_875,(void*)0,&l_875,&l_875},{(void*)0,(void*)0,&l_875,(void*)0},{(void*)0,&l_875,&l_875,&l_875},{(void*)0,&l_875,&l_875,&l_875},{&l_875,&l_875,&l_875,&l_875}},{{&l_875,&l_875,(void*)0,(void*)0},{&l_875,(void*)0,&l_875,&l_875},{&l_875,(void*)0,&l_875,&l_875},{(void*)0,(void*)0,&l_875,(void*)0},{(void*)0,&l_875,&l_875,&l_875}},{{(void*)0,&l_875,&l_875,&l_875},{&l_875,&l_875,&l_875,&l_875},{&l_875,&l_875,(void*)0,(void*)0},{&l_875,(void*)0,&l_875,&l_875},{&l_875,(void*)0,&l_875,&l_875}},{{(void*)0,(void*)0,&l_875,(void*)0},{(void*)0,&l_875,&l_875,&l_875},{(void*)0,&l_875,&l_875,&l_875},{&l_875,&l_875,&l_875,&l_875},{&l_875,&l_875,&l_875,&l_875}},{{(void*)0,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,&l_875},{&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,(void*)0,&l_875},{&l_875,(void*)0,&l_875,(void*)0}},{{&l_875,(void*)0,(void*)0,&l_875},{(void*)0,&l_875,&l_875,&l_875},{(void*)0,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,&l_875},{&l_875,&l_875,(void*)0,&l_875}}};
    int32_t *l_890 = &g_17;
    uint16_t *l_915 = (void*)0;
    uint16_t *l_916 = &g_387;
    uint64_t l_923 = 1UL;
    struct S0 l_954 = {1L,88,0x5D235EBCL,54,-1L};
    uint8_t l_956 = 1UL;
    uint8_t l_1023 = 0UL;
    int64_t ** const l_1026 = &g_515;
    int32_t *l_1114[6][6][1] = {{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}},{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}},{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}},{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}},{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}},{{&g_212.f2},{&g_204},{(void*)0},{&g_92},{(void*)0},{&g_204}}};
    uint16_t *l_1122 = &l_579;
    int8_t ****l_1134 = &g_394;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_670[i] = 9L;
    for (g_375 = (-3); (g_375 >= 17); g_375++)
    { 
        uint32_t l_577 = 5UL;
        uint8_t *l_578 = &g_59[0][5][1].f3;
        int8_t *l_580 = &g_159;
        uint64_t **l_582 = &g_223;
        uint64_t ***l_583 = &g_222;
        int32_t l_584[2];
        int16_t *l_585 = &g_386;
        int32_t l_587 = 1L;
        union U1 *l_593 = &g_59[5][2][1];
        int32_t *l_656 = &l_584[0];
        int32_t *l_657 = &l_584[1];
        int32_t *l_658 = &g_204;
        int32_t *l_659 = &g_204;
        int32_t *l_660 = &l_637;
        int32_t *l_661 = &g_212.f2;
        int32_t *l_662 = (void*)0;
        int32_t *l_663 = (void*)0;
        int32_t *l_665 = &l_664;
        int32_t *l_666 = &g_212.f2;
        int32_t *l_667 = (void*)0;
        int32_t *l_668 = &l_584[0];
        int32_t *l_669[5] = {&l_664,&l_664,&l_664,&l_664,&l_664};
        uint32_t *l_696 = &g_205;
        uint32_t *l_697 = &l_577;
        struct S0 l_700 = {-10L,40,0x367D6336L,85,-1L};
        int64_t **l_749 = &g_515;
        int8_t l_793 = 8L;
        int32_t *l_813[2];
        const int8_t ***l_823 = &g_818[4];
        int8_t *** const *l_872 = &g_394;
        const int32_t *l_898 = &g_92;
        const int32_t **l_897 = &l_898;
        const int32_t ***l_896 = &l_897;
        int i;
        for (i = 0; i < 2; i++)
            l_584[i] = 4L;
        for (i = 0; i < 2; i++)
            l_813[i] = &g_17;
    }
    (*g_342) ^= (((safe_mod_func_int8_t_s_s(((g_204 , (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*l_890), (safe_div_func_int32_t_s_s((((0UL && (safe_rshift_func_int8_t_s_s(((((*l_916) |= (*l_890)) || (((p_35 || (*l_890)) == (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(p_37, 0x10L)), 0)), (*l_890)))) >= 0x1A18L)) | (*l_890)), 7))) , 0x257FBCA7L) , 0x83742767L), (-1L))))), 8UL))) && l_923), (*l_890))) == p_37) || (**g_650));
    for (l_712 = 0; l_712 < 6; l_712 += 1)
    {
        g_818[l_712] = &g_819;
    }
    for (g_368 = 14; (g_368 == 23); ++g_368)
    { 
        int32_t *l_926[2][6] = {{(void*)0,&g_384,(void*)0,&g_384,(void*)0,&g_384},{(void*)0,&g_384,(void*)0,&g_384,(void*)0,&g_384}};
        int32_t l_934 = 0x91DC9FC4L;
        int8_t ***l_955 = &g_650;
        int32_t l_972 = 0xD5333509L;
        struct S0 l_1025[1] = {{-10L,31,0x47D42EEAL,56,0x4699BF5EL}};
        int64_t * const *l_1031 = &g_515;
        const uint32_t l_1051[1][4][6] = {{{4294967288UL,4294967295UL,4294967288UL,4294967288UL,4294967295UL,4294967288UL},{4294967288UL,4294967295UL,4294967288UL,4294967288UL,4294967295UL,4294967288UL},{4294967288UL,4294967295UL,4294967288UL,4294967288UL,4294967295UL,4294967288UL},{4294967288UL,4294967295UL,4294967288UL,4294967288UL,4294967295UL,4294967288UL}}};
        uint64_t **l_1157 = &g_223;
        uint32_t l_1165 = 0xCDDF7F2FL;
        uint32_t l_1174[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1174[i] = 0x1D355E02L;
    }
    return (*g_341);
}



static union U1  func_41(int32_t  p_42, int32_t * p_43)
{ 
    uint64_t l_556 = 0UL;
    union U1 *l_564 = &g_59[5][2][1];
    struct S0 *l_567 = &g_568[3][4][3];
    ++l_556;
    for (g_159 = 29; (g_159 < (-14)); g_159 = safe_sub_func_int64_t_s_s(g_159, 6))
    { 
        uint32_t l_563 = 0x48D8EB04L;
        union U1 **l_565 = &l_564;
        struct S0 *l_566 = &g_212;
        for (g_204 = 10; (g_204 == (-22)); g_204 = safe_sub_func_uint8_t_u_u(g_204, 6))
        { 
            l_563 = ((**g_341) = (*p_43));
        }
        (*l_565) = l_564;
        l_567 = l_566;
        if ((**g_341))
            continue;
    }
    return g_59[6][0][1];
}



static uint8_t  func_48(int32_t * p_49, int32_t * p_50, uint8_t  p_51, int8_t  p_52)
{ 
    return p_52;
}



static int32_t * func_53(union U1  p_54, const uint64_t  p_55, int32_t  p_56, struct S0  p_57, int8_t  p_58)
{ 
    int32_t *l_80 = &g_17;
    union U1 *l_545 = (void*)0;
    int64_t *l_552 = &g_368;
    for (p_56 = 0; (p_56 != (-22)); p_56 = safe_sub_func_int64_t_s_s(p_56, 2))
    { 
        int32_t *l_67 = &g_17;
        uint32_t *l_76 = &g_77;
        union U1 *l_544 = &g_59[0][5][1];
        union U1 **l_543[5][6][3];
        int32_t *l_553 = &g_204;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 3; k++)
                    l_543[i][j][k] = &l_544;
            }
        }
    }
    (*g_342) = ((*l_80) , (((*g_222) = l_552) != ((*l_80) , (g_554 = &g_61))));
    return l_80;
}



static int32_t * func_68(uint16_t  p_69, int32_t * p_70, int32_t * p_71, int64_t  p_72, struct S0  p_73)
{ 
    int16_t l_84 = 0x1A3EL;
    int64_t l_89 = 0L;
    int32_t *l_90 = (void*)0;
    int32_t *l_91[4] = {&g_92,&g_92,&g_92,&g_92};
    uint32_t *l_101 = &g_102;
    int8_t *l_107 = &g_15;
    int32_t *l_108 = (void*)0;
    int32_t *l_109[1][4] = {{&g_110,&g_110,&g_110,&g_110}};
    int32_t l_111 = (-2L);
    uint64_t *l_126 = (void*)0;
    union U1 l_147 = {0};
    uint16_t **l_415 = (void*)0;
    int8_t *l_416 = &g_128;
    int16_t *l_417 = &g_160;
    uint64_t *l_440 = &g_61;
    int i, j;
lbl_283:
    p_73.f4 = ((!(safe_sub_func_int8_t_s_s(l_84, ((safe_mul_func_uint8_t_u_u(g_15, l_84)) < ((1UL & ((255UL > (*g_14)) , (((safe_mul_func_int8_t_s_s((p_69 & 0UL), l_84)) ^ g_15) && l_89))) & l_84))))) | 8L);
    if ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((p_73.f0 | ((g_61 < (((g_110 |= (0x8EL > (safe_mul_func_uint16_t_u_u(65529UL, (safe_div_func_uint16_t_u_u(((((*l_101)--) , (((((((((p_73.f4 > (safe_sub_func_uint32_t_u_u((l_107 == &g_15), g_77))) <= p_69) < g_17) , l_91[0]) != p_71) | g_13) , 0x8BF56F3C4E318651LL) , &g_17) == p_70)) && p_69), g_17)))))) , g_110) | p_73.f1)) != p_69)), l_111)), 0x6E6797F7L)))
    { 
        int8_t *l_116 = &g_15;
        int32_t l_117 = 0x104D70CCL;
        const uint64_t *l_124 = &g_61;
        uint64_t **l_125 = (void*)0;
        int8_t *l_127[4];
        int32_t l_144 = 0x8B6B2362L;
        int32_t **l_146 = &l_91[0];
        union U1 l_148 = {0};
        int16_t *l_158[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_84,(void*)0,&l_84,(void*)0,&l_84},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_84,&l_84,&l_84,(void*)0,&l_84},{(void*)0,(void*)0,&l_84,(void*)0,(void*)0}};
        struct S0 l_165 = {0L,63,-1L,81,-1L};
        int32_t *l_175 = &g_110;
        uint32_t *l_188[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 4; i++)
            l_127[i] = &g_128;
        if ((p_72 >= ((g_128 = (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((void*)0 == l_116), (l_117 && ((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s(l_117, 9)) || ((l_124 != (l_126 = &g_61)) <= 1L)) , p_73.f2) > 0xB592E16A0CFD0E8CLL), (*g_14))) & 0UL)))), 65535UL))) | 0xD9L)))
        { 
            return &g_17;
        }
        else
        { 
            uint64_t l_133[1];
            int i;
            for (i = 0; i < 1; i++)
                l_133[i] = 0x33FF6D77719BA668LL;
            for (g_128 = 0; (g_128 < (-11)); g_128 = safe_sub_func_uint64_t_u_u(g_128, 2))
            { 
                uint16_t *l_134 = &g_135[5][1];
                int16_t *l_136[7] = {&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84};
                int i;
                g_92 = (safe_lshift_func_int16_t_s_u(((l_117 = ((l_133[0] ^= 0xB4ACL) & ((*l_134) = 65532UL))) , p_72), (0xAB8F1B91DFB35854LL != ((-10L) | ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x76L, ((safe_div_func_uint8_t_u_u(((~(4294967295UL | l_144)) < l_144), g_145)) || 0xF159DA389B2D0C04LL))), 0x41L)) > 0x3F41L)))));
                for (p_69 = 1; (p_69 <= 6); p_69 += 1)
                { 
                    return &g_92;
                }
            }
        }
        (*l_146) = &g_17;
        p_73.f4 ^= (l_147 , (l_148 , (g_92 = ((safe_sub_func_uint16_t_u_u(((**l_146) <= (safe_div_func_int16_t_s_s(((safe_div_func_int16_t_s_s(0xE68DL, (safe_sub_func_uint8_t_u_u(((g_110 | (safe_unary_minus_func_int16_t_s((g_159 = (-10L))))) > g_160), p_73.f0)))) , 0xA013L), p_73.f2))), p_73.f0)) | g_135[5][1]))));
        for (p_73.f0 = (-1); (p_73.f0 < (-26)); p_73.f0 = safe_sub_func_int64_t_s_s(p_73.f0, 3))
        { 
            uint64_t *l_183 = (void*)0;
            uint64_t *l_184[5][3][3] = {{{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_61,(void*)0}},{{&g_61,(void*)0,(void*)0},{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61}},{{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61}},{{&g_61,(void*)0,&g_61},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_61,(void*)0}},{{(void*)0,(void*)0,&g_61},{(void*)0,&g_61,&g_61},{&g_61,&g_61,&g_61}}};
            int32_t l_185 = 0xE552D92CL;
            uint16_t *l_189 = &g_176;
            uint32_t *l_201 = &g_102;
            int64_t *l_238[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_275 = 0xCCC9F170L;
            int32_t l_277 = 0x13FC4F8BL;
            int i, j, k;
        }
    }
    else
    { 
lbl_453:
        for (g_264 = 0; (g_264 <= 3); g_264 += 1)
        { 
            if (p_73.f4)
                goto lbl_283;
        }
    }
lbl_397:
    if (g_128)
        goto lbl_283;
    for (l_111 = (-10); (l_111 == (-28)); l_111 = safe_sub_func_uint32_t_u_u(l_111, 5))
    { 
        struct S0 l_286 = {6L,31,0x480C90BAL,53,0x09086BE8L};
        int32_t *l_314[4];
        int16_t *l_333 = &g_299;
        int8_t **l_347 = &g_14;
        uint64_t **l_380 = &g_223;
        int32_t l_400 = 0x76C35AE1L;
        int32_t l_401[7] = {0L,1L,1L,0L,1L,1L,0L};
        int i;
        for (i = 0; i < 4; i++)
            l_314[i] = &g_110;
        g_212.f2 = (l_286 , l_286.f0);
        for (p_73.f4 = 3; (p_73.f4 >= 0); p_73.f4 -= 1)
        { 
            p_73.f2 |= (p_73.f4 < g_264);
        }
        for (p_73.f4 = (-24); (p_73.f4 >= (-8)); p_73.f4 = safe_add_func_int64_t_s_s(p_73.f4, 4))
        { 
            uint32_t l_291 = 0UL;
            int8_t *l_298[5][5] = {{&g_15,(void*)0,&g_15,&g_159,&g_159},{&g_128,&g_159,&g_128,&g_159,&g_159},{&g_15,(void*)0,&g_15,&g_159,&g_159},{&g_128,&g_159,&g_128,&g_159,&g_159},{&g_15,(void*)0,&g_15,&g_159,&g_159}};
            int32_t *l_304 = &g_110;
            uint16_t *l_310 = &g_280[2];
            uint16_t **l_309 = &l_310;
            int8_t **l_313 = &l_107;
            uint64_t **l_315 = &l_126;
            int32_t l_379 = 0x52EEAF5DL;
            int32_t l_398 = 0x4DC30812L;
            uint8_t l_402[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_402[i] = 0UL;
            g_299 &= (((g_212 , p_72) ^ ((**g_222) = (safe_rshift_func_int16_t_s_u(p_73.f0, ((p_73.f2 = (((65535UL & g_15) == l_291) && (g_204 = (((l_286.f4 = (safe_lshift_func_int8_t_s_u((g_128 ^= ((((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(((p_73 , g_59[3][3][1]) , 1L), p_73.f1)), l_291)) || g_92) && (-1L)) , 0xB6L)), p_73.f0))) || (*p_71)) && g_227)))) || l_291))))) | 0x4E3B13C80A7897F9LL);
            if ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0L, (l_304 != (l_314[3] = (((safe_mod_func_int8_t_s_s(((l_286.f3 || (g_204 = ((safe_sub_func_int16_t_s_s(((&g_280[1] != ((*l_309) = &g_135[5][1])) != p_73.f1), (((safe_div_func_uint32_t_u_u((((*l_313) = (void*)0) != &g_128), 0x9FD082DBL)) < g_61) <= l_291))) < l_286.f3))) < 0UL), p_73.f3)) && 248UL) , (void*)0))))), (-1L))))
            { 
                uint64_t ***l_323 = &g_222;
                l_286.f2 = ((l_315 == ((*l_323) = ((safe_mod_func_int64_t_s_s(0x6EDB65A2F4C333C1LL, (safe_lshift_func_uint16_t_u_u(((!(((((*p_70) < p_73.f1) , 0x91L) ^ (-1L)) > (safe_lshift_func_int8_t_s_u(((g_17 , (*g_222)) != (*g_222)), g_135[6][0])))) || (**g_222)), 7)))) , &g_223))) , g_128);
                return p_71;
            }
            else
            { 
                int8_t l_330 = (-1L);
                int32_t l_350 = 0x67A91C08L;
                uint64_t ** const l_362 = &g_223;
                int8_t ****l_396 = &g_394;
                if (((p_69 , p_72) && (safe_sub_func_uint8_t_u_u((4L == (safe_mul_func_uint16_t_u_u((((g_299 & (safe_mul_func_uint8_t_u_u((l_286.f4 ^= l_330), (safe_rshift_func_uint16_t_u_s((&g_160 == l_333), g_135[5][1]))))) ^ 1UL) | l_291), g_17))), g_13))))
                { 
                    int8_t **l_348 = &l_107;
                    int32_t l_349 = 0x8273A12DL;
                    uint32_t *l_367[3][6][6] = {{{&g_227,(void*)0,&g_227,(void*)0,&g_77,(void*)0},{(void*)0,&g_205,(void*)0,&l_291,(void*)0,&g_205},{(void*)0,&g_205,&l_291,(void*)0,&g_227,(void*)0},{&g_227,&g_77,&g_205,&g_77,&g_227,(void*)0},{&l_291,&g_227,&l_291,&g_205,&g_77,&l_291},{&g_205,(void*)0,&g_205,&g_227,&g_205,&l_291}},{{(void*)0,&l_291,&l_291,(void*)0,(void*)0,(void*)0},{&g_205,&g_205,&g_205,&g_205,(void*)0,(void*)0},{(void*)0,&l_291,&l_291,(void*)0,(void*)0,&g_205},{&g_227,&g_205,(void*)0,&g_205,(void*)0,(void*)0},{&g_205,&l_291,&g_227,&l_291,(void*)0,&l_291},{&g_77,&g_205,&g_77,&g_227,(void*)0,(void*)0}},{{(void*)0,&l_291,&g_205,(void*)0,&g_205,&l_291},{&l_291,(void*)0,&g_205,(void*)0,&g_77,&g_227},{(void*)0,&g_227,(void*)0,&g_227,&g_227,(void*)0},{&g_77,&g_77,&g_205,&l_291,&g_227,&l_291},{&g_205,&g_205,&g_227,&g_205,(void*)0,&g_205},{&g_227,&g_205,&g_227,(void*)0,&g_77,&l_291}}};
                    uint8_t *l_371 = &g_59[0][5][1].f3;
                    uint8_t *l_372 = (void*)0;
                    uint8_t *l_373 = &g_59[0][5][1].f3;
                    uint8_t *l_374[5][1];
                    int64_t *l_378 = &g_368;
                    int32_t l_381 = 1L;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_374[i][j] = &g_59[0][5][1].f3;
                    }
                    l_286.f4 = (*p_71);
                    l_350 |= (((!((safe_add_func_int16_t_s_s(((((((safe_div_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((g_341 == (((*l_304) = (0xA58A6616L == ((safe_div_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((((*l_310) &= (((p_73.f4 , l_347) == l_348) && ((((*g_223) != ((0x9C6BD25C15AEBEA4LL && 0x9C4E027CD5C176C8LL) , p_73.f4)) && 6UL) <= g_15))) <= p_69), 0x90L)) & (-10L)) || l_291), 65535UL)) , (*g_342)))) , &g_342)), 1)) | (*g_14)) < 0x8F8233CDAF9B9510LL) , p_72), 1UL)) | 0xAAL) & (**g_341)) <= p_73.f2) >= p_73.f2) ^ l_349), 4L)) , (*p_70))) , &g_14) != &g_14);
                    l_286.f4 = (g_212.f4 ^= (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((((((**g_341) |= (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((**g_222), (safe_rshift_func_int16_t_s_s((l_291 <= (+(l_362 == ((l_379 = ((*l_378) = (safe_sub_func_uint32_t_u_u(g_205, (l_349 = (((safe_div_func_uint32_t_u_u((g_227--), l_286.f4)) , ((255UL != (++g_375)) < p_72)) & p_73.f1)))))) , l_380)))), 11)))) < l_381), 1))) || l_286.f1) > 65533UL) , g_13) , l_349), g_135[0][3])) >= g_160), l_291)));
                    (**g_341) = (0xD455EDBBEDE2C968LL && l_286.f2);
                }
                else
                { 
                    int64_t l_382[3][7][4] = {{{5L,(-4L),0xF4892E3E87EE97CDLL,(-4L)},{(-4L),0x856DDFBAC56A93ABLL,0xF4892E3E87EE97CDLL,0xF4892E3E87EE97CDLL},{5L,5L,(-4L),0xF4892E3E87EE97CDLL},{0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL,0x52A44410B750BE30LL,(-4L)},{0x52A44410B750BE30LL,(-4L),(-4L),0x52A44410B750BE30LL},{5L,(-4L),0xF4892E3E87EE97CDLL,(-4L)},{(-4L),0x856DDFBAC56A93ABLL,0x856DDFBAC56A93ABLL,0x856DDFBAC56A93ABLL}},{{(-4L),(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL},{0xF4892E3E87EE97CDLL,5L,0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL},{0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL,0x52A44410B750BE30LL,0xF4892E3E87EE97CDLL},{(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL,0x52A44410B750BE30LL},{0x52A44410B750BE30LL,5L,0x856DDFBAC56A93ABLL,0x856DDFBAC56A93ABLL},{(-4L),(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL},{0xF4892E3E87EE97CDLL,5L,0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL}},{{0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL,0x52A44410B750BE30LL,0xF4892E3E87EE97CDLL},{(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL,0x52A44410B750BE30LL},{0x52A44410B750BE30LL,5L,0x856DDFBAC56A93ABLL,0x856DDFBAC56A93ABLL},{(-4L),(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL},{0xF4892E3E87EE97CDLL,5L,0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL},{0xF4892E3E87EE97CDLL,0x52A44410B750BE30LL,0x52A44410B750BE30LL,0xF4892E3E87EE97CDLL},{(-4L),0x52A44410B750BE30LL,0x856DDFBAC56A93ABLL,0x52A44410B750BE30LL}}};
                    int32_t l_383 = 7L;
                    int32_t l_385 = 0xC10BBDDBL;
                    const int8_t *l_393 = (void*)0;
                    const int8_t **l_392 = &l_393;
                    const int8_t ***l_391[6] = {&l_392,&l_392,&l_392,&l_392,&l_392,&l_392};
                    const int8_t ****l_390 = &l_391[4];
                    int i, j, k;
                    ++g_387;
                    (*l_390) = (void*)0;
                }
                if (l_286.f3)
                    continue;
                (*l_396) = g_394;
                if (p_73.f1)
                    goto lbl_397;
                if ((*p_71))
                    continue;
            }
            l_402[2]--;
        }
    }
    if (((safe_sub_func_int16_t_s_s(((*l_417) ^= ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((p_73.f4 < ((g_59[0][5][1] , p_73.f0) ^ ((*l_416) ^= ((!((g_102 && 0x6B357821E1CBF274LL) ^ 4294967288UL)) & (safe_add_func_int8_t_s_s((g_414 != l_415), p_72)))))) & g_368), p_73.f4)), 0xB72F1F299F02CD76LL)) || g_15)), 4L)) <= 1L))
    { 
        int64_t *l_424 = &g_212.f0;
        uint64_t **l_439 = &l_126;
        int64_t l_441 = (-1L);
        int32_t l_442 = (-1L);
        int16_t l_443 = (-2L);
        uint16_t l_444 = 1UL;
        uint16_t *l_445[3][2][1] = {{{&g_375},{&g_375}},{{&l_444},{&g_375}},{{&g_375},{&l_444}}};
        int8_t l_446 = 0xCBL;
        int i, j, k;
        l_446 ^= (safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_uint16_t_u_s(((((p_69 = (safe_div_func_int64_t_s_s(((((((*l_424) = (p_73.f3 && 0x15BAL)) <= (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((p_73.f0 <= (p_73.f2 > (((safe_lshift_func_int8_t_s_u(0xB1L, (safe_rshift_func_int8_t_s_u((l_442 ^= (0xCE9AL <= ((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((((*l_439) = ((*g_222) = l_424)) == l_440), 1L)), 1)) | l_441))), g_17)))) | g_13) || g_135[5][1]))), l_441)), 2)), p_72)) && l_441) | l_441)) & p_73.f2) > 1UL) || l_443), l_444))) || g_176) >= 0x21A4C3B1L) || 0xBC294E54C70C7156LL), 2)) | g_61) <= l_444) && g_212.f4) >= p_73.f2), 0));
    }
    else
    { 
        uint32_t l_450 = 0xA506C2C9L;
        int32_t l_451[4] = {(-1L),(-1L),(-1L),(-1L)};
        int32_t l_452 = (-7L);
        int8_t **l_474 = &l_107;
        int64_t *l_513 = &l_89;
        int32_t *l_540 = (void*)0;
        int i;
        g_212.f2 &= (p_73.f2 && (safe_sub_func_int64_t_s_s(0x8DA8DD452F02E2B7LL, (((*l_417) = ((p_73.f3 == (+(l_450 = 7UL))) & (((l_451[2] & (l_452 = (-8L))) < g_92) == p_73.f1))) | p_73.f4))));
        if (g_17)
            goto lbl_453;
        for (g_387 = 0; (g_387 <= 3); g_387 += 1)
        { 
            int32_t l_497 = (-3L);
            int i;
            (**g_341) = (~4294967294UL);
            if (l_451[g_387])
                continue;
        }
        for (g_212.f2 = (-23); (g_212.f2 != (-27)); g_212.f2 = safe_sub_func_int16_t_s_s(g_212.f2, 1))
        { 
            uint32_t l_503 = 0x29FEED70L;
            uint16_t *l_504 = &g_280[1];
            int32_t l_505 = 0L;
        }
    }
    return p_71;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_135[i][j], "g_135[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_212.f3, "g_212.f3", print_hash_value);
    transparent_crc(g_212.f4, "g_212.f4", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_280[i], "g_280[i]", print_hash_value);

    }
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_568[i][j][k].f0, "g_568[i][j][k].f0", print_hash_value);
                transparent_crc(g_568[i][j][k].f1, "g_568[i][j][k].f1", print_hash_value);
                transparent_crc(g_568[i][j][k].f2, "g_568[i][j][k].f2", print_hash_value);
                transparent_crc(g_568[i][j][k].f3, "g_568[i][j][k].f3", print_hash_value);
                transparent_crc(g_568[i][j][k].f4, "g_568[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_976[i][j][k], "g_976[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1262[i][j], "g_1262[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1308[i].f0, "g_1308[i].f0", print_hash_value);
        transparent_crc(g_1308[i].f1, "g_1308[i].f1", print_hash_value);
        transparent_crc(g_1308[i].f2, "g_1308[i].f2", print_hash_value);
        transparent_crc(g_1308[i].f3, "g_1308[i].f3", print_hash_value);
        transparent_crc(g_1308[i].f4, "g_1308[i].f4", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1317[i], "g_1317[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1341[i][j][k], "g_1341[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1353, "g_1353", print_hash_value);
    transparent_crc(g_1367, "g_1367", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1432[i][j][k], "g_1432[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1440, "g_1440", print_hash_value);
    transparent_crc(g_1503, "g_1503", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1582[i], "g_1582[i]", print_hash_value);

    }
    transparent_crc(g_1584, "g_1584", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1586, "g_1586", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1768[i], "g_1768[i]", print_hash_value);

    }
    transparent_crc(g_1867, "g_1867", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1888[i][j][k], "g_1888[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2194.f0, "g_2194.f0", print_hash_value);
    transparent_crc(g_2194.f1, "g_2194.f1", print_hash_value);
    transparent_crc(g_2194.f2, "g_2194.f2", print_hash_value);
    transparent_crc(g_2194.f3, "g_2194.f3", print_hash_value);
    transparent_crc(g_2194.f4, "g_2194.f4", print_hash_value);
    transparent_crc(g_2245.f0, "g_2245.f0", print_hash_value);
    transparent_crc(g_2245.f1, "g_2245.f1", print_hash_value);
    transparent_crc(g_2245.f2, "g_2245.f2", print_hash_value);
    transparent_crc(g_2245.f3, "g_2245.f3", print_hash_value);
    transparent_crc(g_2245.f4, "g_2245.f4", print_hash_value);
    transparent_crc(g_2266, "g_2266", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
