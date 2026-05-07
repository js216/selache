// SPDX-License-Identifier: MIT
// cctest_csmith_fe08b857.c --- cctest case csmith_fe08b857 (csmith seed 4261984343)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc8a6babb */

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

// Options:   -s 4261984343 -o /tmp/csmith_gen_rboyyflj/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const unsigned f0 : 10;
};

union U1 {
   int8_t * f0;
};

union U2 {
   int8_t * f0;
   const int8_t * f1;
};

union U3 {
   uint16_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int16_t  f3;
   signed f4 : 5;
};


static int16_t g_2[5][4] = {{0x0693L,(-4L),0xCA9DL,0xCA9DL},{0x607AL,0x607AL,0x0693L,0xCA9DL},{(-1L),(-4L),(-1L),0x0693L},{(-1L),0x0693L,0x0693L,(-1L)},{0x607AL,0x0693L,0xCA9DL,0x0693L}};
static int32_t g_4 = 1L;
static int16_t g_6 = 0L;
static uint16_t g_7 = 0UL;
static union U3 g_32 = {0x7BD5L};
static union U2 g_40 = {0};
static uint64_t g_52 = 2UL;
static union U1 g_54 = {0};
static int8_t g_56 = 0xA4L;
static int64_t g_61[3] = {9L,9L,9L};
static uint8_t g_62 = 252UL;
static uint16_t g_96 = 1UL;
static union U3 *g_99 = &g_32;
static union U3 **g_98 = &g_99;
static int16_t g_105 = (-1L);
static uint16_t g_106 = 1UL;
static uint64_t g_113 = 0x6CB56AE7BB48DF9FLL;
static uint16_t g_116 = 1UL;
static int16_t g_121[1] = {1L};
static uint32_t g_123 = 0UL;
static int64_t g_131 = 1L;
static int16_t g_136[2][7] = {{(-1L),(-1L),0x0147L,0x9A11L,0x9A11L,0x0147L,(-1L)},{(-1L),(-1L),0x0147L,0x9A11L,0x9A11L,0x0147L,(-1L)}};
static int8_t g_137 = 0x9BL;
static uint32_t g_139 = 0xBCAD3CECL;
static uint32_t g_144 = 0x2C81858AL;
static uint8_t g_174 = 0x23L;
static int32_t g_198 = (-5L);
static int32_t *g_197 = &g_198;
static int8_t g_211[1] = {(-1L)};
static struct S0 g_215 = {3};
static struct S0 g_218 = {5};
static int16_t g_222[4][6][3] = {{{0xD4B5L,0xD4B5L,0x3173L},{1L,(-2L),(-2L)},{0x3173L,0xD4B5L,0x8F2BL},{(-1L),(-7L),(-1L)},{0x3173L,0x1D82L,0x8F2BL},{(-2L),(-2L),1L}},{{0x96AEL,0x1D82L,0x1D82L},{1L,(-7L),(-1L)},{0x96AEL,0xD4B5L,0x96AEL},{(-2L),1L,(-1L)},{0x3173L,0x3173L,0x1D82L},{(-1L),1L,1L}},{{0x1D82L,0xD4B5L,0x8F2BL},{(-1L),(-7L),(-1L)},{0x3173L,0x1D82L,0x8F2BL},{(-2L),(-2L),1L},{0x96AEL,0x1D82L,0x1D82L},{1L,(-7L),(-1L)}},{{0x96AEL,0xD4B5L,0x96AEL},{(-2L),1L,(-1L)},{0x3173L,0x3173L,0x1D82L},{(-1L),1L,1L},{0x1D82L,0xD4B5L,0x8F2BL},{(-1L),(-7L),(-1L)}}};
static int16_t g_223 = 0x6BE1L;
static uint32_t g_224 = 4294967294UL;
static uint32_t g_250 = 0xF7A27DFFL;
static uint32_t g_254 = 9UL;
static uint32_t g_274 = 0x760C6957L;
static uint16_t g_284 = 0x4225L;
static const union U3 *g_307 = &g_32;
static const union U3 **g_306 = &g_307;
static const union U3 ***g_305 = &g_306;
static const union U3 ****g_304 = &g_305;
static const union U3 *****g_303 = &g_304;
static uint64_t g_409[2][1][1] = {{{18446744073709551613UL}},{{18446744073709551613UL}}};
static int16_t *g_424 = &g_136[0][3];
static int64_t *g_436 = (void*)0;
static uint16_t g_529 = 0x0D56L;
static int8_t *g_561 = (void*)0;
static uint16_t *g_596 = &g_96;
static uint16_t **g_595 = &g_596;
static struct S0 g_618[4][7] = {{{0},{2},{0},{19},{19},{0},{2}},{{11},{8},{1},{1},{8},{11},{8}},{{0},{19},{19},{0},{2},{0},{19}},{{12},{12},{11},{1},{11},{12},{12}}};
static struct S0 *g_617[6] = {&g_215,&g_215,&g_215,&g_215,&g_215,&g_215};
static uint32_t g_627 = 0x3792C8E8L;
static const int32_t *g_632 = &g_198;
static int64_t g_689 = 0x31B8EE73EEA8B851LL;
static int64_t g_691 = 1L;
static int8_t g_693[5][4] = {{0xF9L,(-9L),(-9L),0xF9L},{0xB3L,(-9L),0x49L,(-9L)},{(-9L),0x8BL,0x49L,0x49L},{0xB3L,0xB3L,(-9L),0x49L},{0xF9L,0x8BL,0xF9L,(-9L)}};
static int16_t g_694 = 0x4A3DL;
static uint8_t g_696 = 0x75L;
static union U1 *g_714 = &g_54;
static int64_t **g_729[3] = {&g_436,&g_436,&g_436};
static int64_t ***g_728[5][1] = {{(void*)0},{&g_729[0]},{(void*)0},{&g_729[0]},{(void*)0}};
static int64_t **** const g_727 = &g_728[3][0];
static int8_t g_778 = (-1L);
static int32_t **g_788 = &g_197;
static int32_t ***g_787 = &g_788;
static const int32_t g_870 = 0x8C691411L;
static uint16_t g_915[3][2][3] = {{{65534UL,65534UL,65530UL},{0xDF07L,0xDF07L,0x8FD0L}},{{65534UL,65534UL,65530UL},{0xDF07L,0xDF07L,0x8FD0L}},{{65534UL,65534UL,65530UL},{0xDF07L,0xDF07L,0x8FD0L}}};
static uint16_t g_918[2][6] = {{6UL,6UL,65530UL,6UL,6UL,65530UL},{6UL,6UL,65530UL,6UL,6UL,65530UL}};
static uint32_t g_922 = 4294967295UL;
static int32_t g_942 = 1L;
static uint32_t g_943 = 0xE5AF1F14L;
static union U2 *g_961 = &g_40;
static union U2 **g_960 = &g_961;
static int32_t g_985[6] = {5L,5L,5L,5L,5L,5L};
static int32_t g_987 = 1L;
static uint32_t g_988[1][7] = {{1UL,1UL,4UL,1UL,1UL,4UL,1UL}};
static int32_t g_1013 = (-7L);
static int8_t g_1034 = 0x8CL;
static uint64_t g_1035 = 0x2A589FE6DA95DA51LL;
static int8_t **g_1099 = (void*)0;
static int8_t ***g_1098 = &g_1099;
static int8_t g_1102[1][4][5] = {{{(-1L),(-7L),(-1L),1L,1L},{(-1L),(-7L),(-1L),1L,1L},{(-1L),(-7L),(-1L),1L,1L},{(-1L),(-7L),(-1L),1L,(-1L)}}};
static int16_t g_1103 = 0L;
static int64_t g_1145 = 0x7AF391591260C1BALL;
static int64_t **** const *g_1180 = (void*)0;
static uint64_t g_1204 = 0xC37BE35C2A6FDFD4LL;
static const int32_t g_1225 = (-1L);
static uint64_t g_1246[1] = {18446744073709551615UL};
static const union U1 g_1299 = {0};
static const union U1 **g_1300 = (void*)0;
static const union U1 *g_1302[3] = {&g_1299,&g_1299,&g_1299};
static const union U1 **g_1301[3][2] = {{&g_1302[0],&g_1302[0]},{&g_1302[0],&g_1302[0]},{&g_1302[0],&g_1302[0]}};



static uint32_t  func_1(void);
static union U1  func_10(int8_t * p_11, struct S0  p_12, const int32_t * p_13, int32_t  p_14);
static int8_t * func_15(int32_t * const  p_16, union U3  p_17);
static union U3  func_19(union U3  p_20, uint64_t  p_21, const int32_t * p_22, uint32_t  p_23, uint64_t  p_24);
static union U3  func_25(int16_t  p_26, int32_t * p_27, int32_t * p_28);
static union U3 * func_33(union U3 * p_34, int64_t  p_35);
static union U3  func_36(int16_t  p_37);
static union U1  func_48(int32_t  p_49, union U2 * p_50);




static uint32_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    int32_t *l_5[4][2][5] = {{{&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4}}};
    struct S0 l_868 = {30};
    union U3 l_905 = {65535UL};
    union U2 l_933 = {0};
    int32_t l_966[5] = {0x036E2BD5L,0x036E2BD5L,0x036E2BD5L,0x036E2BD5L,0x036E2BD5L};
    union U1 *l_998[3];
    union U2 ***l_1022 = (void*)0;
    uint16_t l_1092 = 0xF7FBL;
    uint8_t l_1105[4] = {0x72L,0x72L,0x72L,0x72L};
    int64_t *l_1117 = &g_61[1];
    uint16_t l_1124 = 0x91D6L;
    int32_t ****l_1133 = &g_787;
    uint8_t l_1290 = 0x6DL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_998[i] = &g_54;
    --g_7;
    return (*l_3);
}



static union U1  func_10(int8_t * p_11, struct S0  p_12, const int32_t * p_13, int32_t  p_14)
{ 
    (*g_788) = (**g_787);
    return (*g_714);
}



static int8_t * func_15(int32_t * const  p_16, union U3  p_17)
{ 
    uint32_t l_844 = 0xE029ECC4L;
    union U3 **l_853 = (void*)0;
    int32_t *l_859 = &g_198;
    int32_t *l_860 = &g_198;
    int32_t *l_861 = &g_4;
    int64_t l_862[3][5][6] = {{{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)}},{{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)}},{{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)},{(-6L),0x13C336978B1BD36CLL,(-6L),(-6L),0x13C336978B1BD36CLL,(-6L)}}};
    int32_t *l_863 = &g_4;
    int32_t *l_864[6] = {&g_4,(void*)0,&g_4,&g_4,(void*)0,&g_4};
    uint16_t l_865[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_865[i] = 65535UL;
    for (g_139 = 0; (g_139 <= 0); g_139 += 1)
    { 
        int32_t l_855 = 0xC8418D6AL;
        struct S0 *l_856 = &g_215;
        int32_t l_857 = 1L;
        int i;
        (**g_788) = g_211[g_139];
        if ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((0xD6C9055A70F7BB4ELL != g_211[g_139]) & (safe_div_func_int8_t_s_s(l_844, l_844))) <= ((g_211[g_139] | (g_218.f0 < l_844)) > l_844)), g_211[g_139])), 0UL)))
        { 
            union U3 **l_854[2][3][7] = {{{&g_99,(void*)0,&g_99,&g_99,(void*)0,&g_99,&g_99},{(void*)0,&g_99,&g_99,(void*)0,(void*)0,&g_99,&g_99},{(void*)0,&g_99,&g_99,(void*)0,&g_99,&g_99,(void*)0}},{{&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99},{&g_99,(void*)0,&g_99,(void*)0,&g_99,&g_99,&g_99},{&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99}}};
            int32_t l_858[7][7][2] = {{{(-7L),0x590EBA73L},{0xA953DB8CL,0L},{(-1L),6L},{0L,0xB19BB011L},{0xC1D321AFL,7L},{(-3L),0x5350BE3DL},{0x3081A1F4L,(-3L)}},{{(-1L),0xC179916DL},{0xAB56BAE2L,0xE3D56BA5L},{0x3081A1F4L,0x590EBA73L},{0xE3D56BA5L,7L},{0xFDE4C2ACL,(-3L)},{0L,(-1L)},{6L,0L}},{{0xC1D321AFL,0x5350BE3DL},{(-7L),3L},{0xFDE4C2ACL,0L},{0xAB56BAE2L,0xAB56BAE2L},{0L,0xE3D56BA5L},{0xA953DB8CL,7L},{0xB19BB011L,3L}},{{0x3081A1F4L,0xB19BB011L},{6L,0xC179916DL},{6L,0xB19BB011L},{0x3081A1F4L,3L},{0xB19BB011L,7L},{0xA953DB8CL,0xE3D56BA5L},{0L,0xAB56BAE2L}},{{0xAB56BAE2L,0L},{0xFDE4C2ACL,3L},{(-7L),0x5350BE3DL},{0xC1D321AFL,0L},{6L,(-1L)},{0L,(-3L)},{0xFDE4C2ACL,7L}},{{0xE3D56BA5L,0x590EBA73L},{0x3081A1F4L,0xE3D56BA5L},{0xAB56BAE2L,0xC179916DL},{(-1L),(-3L)},{0x3081A1F4L,0x5350BE3DL},{(-3L),7L},{0xC1D321AFL,0xB19BB011L}},{{0L,6L},{(-1L),0L},{0xA953DB8CL,0x590EBA73L},{(-7L),0x590EBA73L},{0xA953DB8CL,0L},{(-1L),6L},{0L,0xB19BB011L}}};
            int i, j, k;
            (*p_16) ^= (g_211[g_139] ^ ((0xE24CL != l_844) > ((safe_div_func_uint32_t_u_u(0xEFB6C4DEL, ((safe_sub_func_uint8_t_u_u((l_857 = ((((***g_787) = ((l_855 = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_211[g_139], (l_853 == l_854[0][1][4]))), l_844))) , 0x70CC8D0DL)) , l_856) != &g_618[0][6])), l_858[5][3][1])) || l_844))) != l_844)));
        }
        else
        { 
            (*g_788) = l_859;
        }
    }
    for (g_254 = 0; g_254 < 6; g_254 += 1)
    {
        g_617[g_254] = &g_618[0][0];
    }
    for (g_113 = 0; g_113 < 5; g_113 += 1)
    {
        for (g_56 = 0; g_56 < 1; g_56 += 1)
        {
            g_728[g_113][g_56] = &g_729[0];
        }
    }
    l_865[0]--;
    (*g_727) = (*g_727);
    return &g_56;
}



static union U3  func_19(union U3  p_20, uint64_t  p_21, const int32_t * p_22, uint32_t  p_23, uint64_t  p_24)
{ 
    int64_t *l_435 = &g_61[1];
    int64_t * const l_437 = &g_61[1];
    int32_t l_438 = 0x0C3C40BEL;
    uint16_t *l_471 = &g_7;
    const int32_t *l_490 = &l_438;
    const union U1 l_532 = {0};
    int8_t *l_559 = &g_137;
    int32_t l_581 = 1L;
    struct S0 *l_615[7][7] = {{&g_218,(void*)0,(void*)0,&g_218,(void*)0,(void*)0,&g_218},{&g_215,&g_215,&g_215,&g_215,&g_215,&g_215,&g_215},{&g_218,&g_218,&g_215,&g_218,&g_218,&g_215,&g_218},{&g_215,&g_215,&g_215,&g_215,&g_215,&g_215,&g_215},{(void*)0,&g_218,(void*)0,(void*)0,&g_218,(void*)0,(void*)0},{&g_215,&g_215,&g_215,&g_215,&g_215,&g_215,&g_215},{&g_218,(void*)0,(void*)0,&g_218,(void*)0,(void*)0,&g_218}};
    int64_t l_623[3][4][6] = {{{1L,0xBCB76E4067920F93LL,1L,(-8L),0x866CF1FEEF1FF588LL,0x866CF1FEEF1FF588LL},{0L,1L,1L,0L,0xBCB76E4067920F93LL,6L},{6L,0L,0x866CF1FEEF1FF588LL,0L,6L,(-8L)},{0L,6L,(-8L),(-8L),6L,0L}},{{1L,0L,0xBCB76E4067920F93LL,6L,0xBCB76E4067920F93LL,0L},{0xBCB76E4067920F93LL,1L,(-8L),0x866CF1FEEF1FF588LL,0x866CF1FEEF1FF588LL,(-8L)},{(-1L),(-1L),0xBCB76E4067920F93LL,(-8L),0L,(-8L)},{6L,(-1L),6L,0x866CF1FEEF1FF588LL,0xBCB76E4067920F93LL,0xBCB76E4067920F93LL}},{{1L,6L,6L,1L,(-1L),(-8L)},{(-8L),1L,0xBCB76E4067920F93LL,1L,(-8L),0x866CF1FEEF1FF588LL},{1L,(-8L),0x866CF1FEEF1FF588LL,0x866CF1FEEF1FF588LL,(-8L),1L},{6L,1L,(-1L),(-8L),(-1L),1L}}};
    int32_t l_624 = 1L;
    int64_t l_690 = 0xA38EB5293D8F38F7LL;
    int32_t l_692 = (-5L);
    int32_t l_695 = 0xBD7C7014L;
    int64_t ****l_730 = &g_728[3][0];
    int32_t **l_764 = &g_197;
    int32_t l_836 = (-1L);
    int i, j, k;
    for (g_254 = 0; (g_254 <= 26); ++g_254)
    { 
        union U2 *l_431 = &g_40;
        union U2 **l_430 = &l_431;
        int64_t *l_432 = (void*)0;
        int64_t **l_433 = (void*)0;
        int64_t **l_434[5];
        int32_t l_439 = 0x005F595BL;
        const int32_t *l_489 = &g_4;
        union U3 l_500 = {0x10C0L};
        int32_t l_527 = 4L;
        int8_t **l_560 = &l_559;
        int16_t l_598 = 0x1A87L;
        int32_t l_625 = 3L;
        int32_t l_626 = 0x60DEB74DL;
        int32_t **l_633 = &g_197;
        int i;
        for (i = 0; i < 5; i++)
            l_434[i] = &l_432;
    }
    for (g_224 = 0; (g_224 < 8); g_224 = safe_add_func_int8_t_s_s(g_224, 1))
    { 
        uint8_t *l_672 = &g_174;
        const int16_t *l_676 = &g_2[2][0];
        const int16_t **l_675 = &l_676;
        int32_t l_677[4][4] = {{0x5A70C796L,0x3B4957AAL,0x4075F2E7L,(-1L)},{(-3L),0x3B4957AAL,0x3B4957AAL,(-3L)},{0x3B4957AAL,(-3L),0x5A70C796L,0x456DB8CDL},{0x3B4957AAL,0x5A70C796L,0x3B4957AAL,0x4075F2E7L}};
        struct S0 l_678 = {8};
        int64_t **l_681 = &g_436;
        int64_t ***l_680 = &l_681;
        int64_t ****l_679 = &l_680;
        uint32_t l_708 = 0UL;
        union U2 *l_709[3];
        uint64_t l_725 = 0xB94C9B9E3F4EC291LL;
        union U3 l_775 = {0x82DDL};
        int32_t ** const * const l_790 = &l_764;
        int32_t *l_793[1][6][3] = {{{&l_438,&l_438,&g_4},{&g_4,&l_677[3][1],&g_4},{&l_438,&g_4,&g_4},{&l_581,&l_677[3][1],&l_581},{&l_438,&l_438,&g_4},{&g_4,&l_677[3][1],&g_4}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_709[i] = &g_40;
    }
    return p_20;
}



static union U3  func_25(int16_t  p_26, int32_t * p_27, int32_t * p_28)
{ 
    uint32_t l_38 = 0UL;
    union U3 *l_150 = &g_32;
    uint16_t *l_421 = &g_116;
    int16_t *l_423 = &g_136[0][2];
    int16_t **l_422[6] = {&l_423,&l_423,&l_423,&l_423,&l_423,&l_423};
    const uint16_t l_425 = 4UL;
    int i;
    for (g_4 = 0; (g_4 < 12); ++g_4)
    { 
        return g_32;
    }
    (***g_304) = func_33((func_36((l_38 == 0x9EB1L)) , l_150), g_121[0]);
    (*g_197) = (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((((*p_27) = (((!(safe_sub_func_uint64_t_u_u(((p_26 , l_421) == l_421), 1L))) , (g_424 = &p_26)) == (void*)0)) , g_4) | (*g_197)), 4)), l_425)), l_38));
    return (*l_150);
}



static union U3 * func_33(union U3 * p_34, int64_t  p_35)
{ 
    const uint8_t l_155[4][3] = {{246UL,246UL,246UL},{0x6EL,0xBAL,0x6EL},{246UL,246UL,246UL},{0x6EL,0xBAL,0x6EL}};
    uint64_t *l_159 = &g_113;
    union U3 *l_160 = &g_32;
    int32_t *l_163 = (void*)0;
    int32_t l_164 = 0xCC15F2E4L;
    int32_t l_173[2][2][4] = {{{0xE818DDB1L,0xE818DDB1L,0xE818DDB1L,0xE818DDB1L},{0xE818DDB1L,0xE818DDB1L,0xE818DDB1L,0xE818DDB1L}},{{0xE818DDB1L,0xE818DDB1L,0xE818DDB1L,0xE818DDB1L},{0xE818DDB1L,0xE818DDB1L,0xE818DDB1L,0xE818DDB1L}}};
    union U3 ** const **l_177 = (void*)0;
    const union U3 ***l_182 = (void*)0;
    const union U3 ****l_181 = &l_182;
    struct S0 *l_214 = &g_215;
    int32_t l_220 = 0xB575C4E6L;
    union U2 *l_289[5][1][1] = {{{&g_40}},{{&g_40}},{{&g_40}},{{&g_40}},{{&g_40}}};
    int i, j, k;
    return (*g_98);
}



static union U3  func_36(int16_t  p_37)
{ 
    union U2 *l_39[3];
    int32_t l_43 = 0x5B3D925DL;
    uint64_t *l_51[1][3][3];
    int32_t l_53 = 0x18DA91E5L;
    const int8_t *l_55[5][3] = {{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{(void*)0,&g_56,(void*)0},{(void*)0,&g_56,&g_56}};
    int32_t l_148 = (-1L);
    union U3 l_149 = {0xBD4AL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_39[i] = &g_40;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_51[i][j][k] = &g_52;
        }
    }
    l_39[0] = (void*)0;
    g_32.f4 = ((safe_sub_func_int8_t_s_s((l_43 | (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((l_148 = (((((((func_48(((l_53 = (g_52 = (l_43 != l_43))) < (g_54 , (l_55[1][2] != (void*)0))), l_39[0]) , 0x8811EA0AL) == 0x096152EFL) ^ 0xD1A19A74B1038030LL) , p_37) >= p_37) && l_53) <= p_37)), 0)) , &l_53) == &l_43) > 0xFB9DE4BEL), g_116))), l_43)) || l_53);
    return l_149;
}



static union U1  func_48(int32_t  p_49, union U2 * p_50)
{ 
    int16_t l_66[1];
    int32_t l_82 = 0x63631148L;
    int32_t l_138 = (-3L);
    int32_t l_142 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_66[i] = 0x86B4L;
    for (g_32.f3 = 3; (g_32.f3 >= 0); g_32.f3 -= 1)
    { 
        uint32_t l_67 = 1UL;
        union U3 *l_71 = &g_32;
        union U3 ** const l_70 = &l_71;
        int32_t l_101[5] = {0xA4A7B592L,0xA4A7B592L,0xA4A7B592L,0xA4A7B592L,0xA4A7B592L};
        int8_t l_134 = 0x24L;
        int8_t l_143 = 0xE8L;
        int i;
        for (g_7 = 0; (g_7 <= 3); g_7 += 1)
        { 
            union U3 ** const *l_76 = (void*)0;
            struct S0 l_77 = {26};
            union U3 ***l_80 = (void*)0;
            int32_t l_92[2][2][1] = {{{5L},{0xB839B477L}},{{5L},{0xB839B477L}}};
            int32_t *l_147 = (void*)0;
            int i, j, k;
            if (g_2[(g_32.f3 + 1)][g_7])
            { 
                int32_t *l_65[2][3][7] = {{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}}};
                union U3 **l_73 = &l_71;
                union U3 ***l_72 = &l_73;
                int i, j, k;
                for (g_6 = 25; (g_6 == (-18)); g_6 = safe_sub_func_uint8_t_u_u(g_6, 4))
                { 
                    int32_t *l_59 = &g_4;
                    int32_t *l_60[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_60[i] = &g_4;
                    ++g_62;
                    if (g_2[(g_32.f3 + 1)][g_7])
                        break;
                }
                l_67++;
                if (p_49)
                    continue;
                (*l_72) = l_70;
            }
            else
            { 
                union U3 ***l_78 = (void*)0;
                union U3 ****l_79[5][7][2] = {{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}}};
                int32_t *l_81[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_81[i] = &g_4;
                if ((l_82 = (safe_mod_func_int8_t_s_s((7L < (l_76 == (l_80 = (l_77 , l_78)))), g_2[(g_32.f3 + 1)][g_7]))))
                { 
                    uint64_t *l_91[6] = {(void*)0,&g_52,&g_52,(void*)0,&g_52,&g_52};
                    uint16_t *l_95 = &g_96;
                    int32_t l_97 = (-1L);
                    int i;
                    p_49 = (safe_mul_func_int16_t_s_s(p_49, (((void*)0 != &g_40) & (l_66[0] ^ (p_49 , ((safe_div_func_uint8_t_u_u(((((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_95) = ((l_92[1][1][0] = 0x9947D9BA7415234DLL) & (((safe_sub_func_int8_t_s_s(p_49, 0x4BL)) < g_6) > 0xF4B2487FL))), l_82)) >= l_97), 0x7B67A03D6E0AFCEDLL)) > p_49) && g_2[2][0]) > g_2[3][2]), p_49)) & 0x65L))))));
                    g_4 &= ((&l_71 != g_98) <= p_49);
                    p_49 |= 1L;
                }
                else
                { 
                    int16_t l_100 = 0xE302L;
                    uint64_t l_102 = 0x8E6A876A4828161DLL;
                    l_102--;
                }
                g_106--;
                for (g_52 = (-12); (g_52 == 44); ++g_52)
                { 
                    int32_t *l_111 = &l_92[1][0][0];
                    int32_t **l_112 = &l_81[0];
                    uint32_t *l_122 = &g_123;
                    int64_t *l_130 = &g_131;
                    (*l_112) = l_111;
                    g_113--;
                    g_4 = (g_116 == (safe_lshift_func_uint8_t_u_u((((*l_130) &= (safe_mul_func_int16_t_s_s(((((l_66[0] > (--(*l_122))) ^ (safe_div_func_int64_t_s_s(p_49, 0xF1C6DC0DC4BEA28ALL))) < (l_67 >= (((safe_lshift_func_int16_t_s_u(p_49, ((l_92[1][1][0] ^= p_49) == p_49))) , l_77) , 1L))) , g_61[1]), g_113))) , g_105), l_66[0])));
                }
                for (g_105 = 0; (g_105 != 8); g_105 = safe_add_func_uint32_t_u_u(g_105, 8))
                { 
                    int64_t l_135 = (-1L);
                    g_139++;
                }
                ++g_144;
            }
            l_147 = &p_49;
            if (p_49)
                break;
        }
    }
    return g_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);

    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_136[i][j], "g_136[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_211[i], "g_211[i]", print_hash_value);

    }
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_222[i][j][k], "g_222[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_409[i][j][k], "g_409[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_529, "g_529", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_618[i][j].f0, "g_618[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_693[i][j], "g_693[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_915[i][j][k], "g_915[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_918[i][j], "g_918[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_985[i], "g_985[i]", print_hash_value);

    }
    transparent_crc(g_987, "g_987", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_988[i][j], "g_988[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1102[i][j][k], "g_1102[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1225, "g_1225", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1246[i], "g_1246[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
