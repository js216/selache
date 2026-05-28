// SPDX-License-Identifier: MIT
// cctest_csmith_052b2782.c --- cctest case csmith_052b2782 (csmith seed 86714242)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9110b8ce */
/* @exp_ticks 0x6f72 */

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

// Options:   -s 86714242 -o /tmp/csmith_gen_xnh9xnu6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint16_t  f1;
};

union U1 {
   int16_t  f0;
   int8_t * f1;
};

union U2 {
   int16_t  f0;
   int8_t * f1;
   int8_t * f2;
   uint64_t  f3;
};


static uint16_t g_30 = 0UL;
static uint16_t g_34 = 0UL;
static union U1 g_49 = {-3L};
static int32_t g_53 = (-1L);
static int32_t g_57 = 9L;
static uint16_t g_67 = 0UL;
static uint8_t g_84 = 0xD9L;
static int32_t g_89 = 0x87198B9DL;
static struct S0 g_94 = {0x33464EB7L,0x0427L};
static int64_t g_102 = 0x878D320CD53B18A5LL;
static uint64_t g_104 = 0x0A7320B692EDFCA5LL;
static int32_t g_113 = 0x2AD413EDL;
static int32_t g_114 = 0xB2EFFCBCL;
static uint8_t g_115 = 0UL;
static struct S0 *g_129[6][7][3] = {{{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,(void*)0,(void*)0},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,&g_94,&g_94},{&g_94,(void*)0,&g_94}},{{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,(void*)0,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,&g_94,(void*)0}},{{(void*)0,(void*)0,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,(void*)0,&g_94},{&g_94,&g_94,&g_94}},{{(void*)0,&g_94,&g_94},{(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,(void*)0,(void*)0},{&g_94,&g_94,(void*)0},{&g_94,&g_94,(void*)0}},{{(void*)0,&g_94,(void*)0},{&g_94,&g_94,(void*)0},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94},{(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94}}};
static struct S0 **g_128 = &g_129[5][3][0];
static struct S0 ***g_127 = &g_128;
static uint16_t g_137 = 6UL;
static int16_t g_161 = 1L;
static uint16_t g_163 = 0xDB93L;
static int8_t g_172[7] = {0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L};
static int32_t g_173 = (-7L);
static uint64_t g_175[4][4] = {{18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL},{18446744073709551615UL,9UL,9UL,18446744073709551615UL},{9UL,18446744073709551615UL,9UL,9UL},{18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL}};
static uint8_t g_182 = 0xFCL;
static int32_t *g_185 = &g_57;
static union U1 *g_196[7] = {&g_49,&g_49,&g_49,&g_49,&g_49,&g_49,&g_49};
static union U1 **g_195 = &g_196[2];
static union U2 g_223 = {-3L};
static uint32_t g_248 = 18446744073709551609UL;
static uint8_t *g_252 = &g_84;
static uint8_t ** const g_251 = &g_252;
static union U2 *g_255 = &g_223;
static int16_t g_261 = 0L;
static int64_t g_262[4][3][7] = {{{0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL},{0x8E628B5B6B9B84ECLL,(-1L),(-2L),(-1L),0x8E628B5B6B9B84ECLL,0x0322CA6194124E36LL,0x8E628B5B6B9B84ECLL},{9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L}},{{3L,(-1L),3L,0x2EF309068607F204LL,0x8E628B5B6B9B84ECLL,0x2EF309068607F204LL,3L},{9L,9L,0x964357ABCD3A8A00LL,9L,9L,0x964357ABCD3A8A00LL,9L},{0x8E628B5B6B9B84ECLL,0x2EF309068607F204LL,3L,(-1L),3L,0x2EF309068607F204LL,0x8E628B5B6B9B84ECLL}},{{0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL},{0x8E628B5B6B9B84ECLL,(-1L),(-2L),(-1L),0x8E628B5B6B9B84ECLL,0x0322CA6194124E36LL,0x8E628B5B6B9B84ECLL},{9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L,0x511497D112C0037ELL,0x511497D112C0037ELL,9L}},{{3L,(-1L),3L,0x2EF309068607F204LL,0x8E628B5B6B9B84ECLL,0x2EF309068607F204LL,3L},{9L,9L,0x964357ABCD3A8A00LL,9L,9L,0x964357ABCD3A8A00LL,9L},{0x8E628B5B6B9B84ECLL,0x2EF309068607F204LL,3L,(-1L),(-2L),0x0322CA6194124E36LL,3L}}};
static int32_t g_263 = (-1L);
static int32_t g_264 = 0xDCAA2655L;
static uint16_t g_265 = 65535UL;
static int8_t g_275 = 0x10L;
static uint64_t g_281 = 0x97C60415487D05AALL;
static uint8_t g_311[1][3][3] = {{{0xD0L,0xD0L,0xD0L},{0xD0L,0xD0L,0xD0L},{0xD0L,0xD0L,0xD0L}}};
static int32_t g_332 = 5L;
static uint16_t g_333 = 0x45A4L;
static int16_t *g_386 = &g_49.f0;
static int16_t **g_385 = &g_386;
static int8_t g_425 = 0x8BL;
static uint8_t g_426[2] = {0xBCL,0xBCL};
static uint16_t g_483 = 0x9C20L;
static uint64_t g_490 = 0xA3F5977C4BEDB2D0LL;
static int32_t * const *g_547[4][2] = {{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}};
static int32_t * const **g_546 = &g_547[0][1];
static int32_t **g_549 = &g_185;
static int32_t ***g_548[5][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_549,&g_549,&g_549,&g_549,&g_549}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_549,&g_549,&g_549,&g_549,&g_549}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static union U1 ***g_561 = &g_195;
static union U1 *** const *g_560[2][4] = {{&g_561,(void*)0,(void*)0,&g_561},{(void*)0,&g_561,(void*)0,(void*)0}};
static int32_t g_565[6] = {0x5FE0C3B8L,0x5FE0C3B8L,0x5FE0C3B8L,0x5FE0C3B8L,0x5FE0C3B8L,0x5FE0C3B8L};
static int16_t ***g_567 = &g_385;
static int16_t ****g_566[2] = {&g_567,&g_567};
static uint32_t g_611 = 4294967295UL;
static int32_t g_625 = 0L;
static int64_t g_881 = 0x050B53D00BE4EC74LL;
static uint16_t g_900 = 65535UL;
static const int32_t *g_1015 = &g_114;
static int16_t ***g_1083 = &g_385;
static union U1 ***g_1136 = &g_195;
static union U1 ***g_1137 = &g_195;
static union U1 **** const g_1135[6][7] = {{&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137},{&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137},{&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137,&g_1137}};
static union U1 **** const *g_1134 = &g_1135[1][0];
static int64_t **g_1194 = (void*)0;
static int64_t ***g_1193 = &g_1194;
static uint64_t g_1289 = 0x4F1A6012F6EB4A47LL;
static int32_t g_1306 = 0x93D20953L;
static uint16_t g_1327 = 0xB5DAL;
static uint32_t g_1398 = 0UL;
static union U2 **g_1410 = &g_255;
static union U2 ***g_1409 = &g_1410;
static union U2 **** const g_1408 = &g_1409;
static uint8_t g_1513 = 247UL;
static int16_t g_1523 = 0x06ACL;
static uint64_t g_1524 = 0x2561BC9C8631C72CLL;
static const union U2 *g_1550 = (void*)0;
static const union U2 **g_1549 = &g_1550;
static const union U2 ***g_1548 = &g_1549;
static const union U2 ****g_1547 = &g_1548;
static const union U2 *****g_1546[1] = {&g_1547};
static int64_t **g_1616 = (void*)0;
static int32_t g_1675[7][1][6] = {{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}},{{0x24FF6FBDL,0x24FF6FBDL,(-7L),0x24FF6FBDL,0x24FF6FBDL,(-7L)}}};



static uint32_t  func_1(void);
static struct S0 * func_2(int64_t  p_3, int64_t  p_4, const int8_t * p_5, int64_t  p_6);
static union U2  func_8(const int32_t  p_9, int8_t * const  p_10);
static int32_t  func_15(struct S0 * p_16, struct S0 * p_17, int32_t  p_18, int32_t  p_19, int32_t  p_20);
static const union U2  func_41(struct S0 * const  p_42, uint32_t  p_43, const struct S0 * p_44);
static struct S0 * func_45(uint16_t  p_46, union U1  p_47);
static int32_t  func_70(uint16_t  p_71, int32_t * p_72);
static struct S0 ** func_74(uint16_t * p_75, const union U1 * p_76, int64_t  p_77, int8_t  p_78);




static uint32_t  func_1(void)
{ 
    int32_t l_7[6] = {0x3E86F8C7L,0x3E86F8C7L,0x5C6EFF3DL,0x3E86F8C7L,0x3E86F8C7L,0x5C6EFF3DL};
    uint16_t *l_29 = &g_30;
    uint16_t *l_33 = &g_34;
    int16_t l_48 = 0xADC6L;
    union U1 *l_50 = &g_49;
    int8_t *l_273 = &g_172[6];
    int8_t *l_274 = &g_275;
    int16_t l_276 = 0xC4EDL;
    union U1 **l_1638 = &g_196[2];
    int8_t l_1641 = 0x40L;
    int16_t l_1642 = 4L;
    int16_t l_1643 = 1L;
    int32_t *l_1681 = &g_332;
    struct S0 ****l_1699 = (void*)0;
    union U1 l_1707 = {0x421BL};
    int i;
lbl_1648:
    (**g_127) = func_2(((l_7[0] , func_8((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_15(((safe_rshift_func_uint8_t_u_s((l_7[0] > (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_274) = ((*l_273) = (safe_div_func_uint32_t_u_u((((*l_33) = (--(*l_29))) && g_30), (safe_mod_func_uint32_t_u_u(l_7[2], (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_7[0] && ((func_41(func_45(l_48, ((*l_50) = g_49)), l_7[0], (*g_128)) , (-9L)) || g_114)), 7L)), l_7[1])))))))), l_7[5])), 255UL)) , &g_275) == (void*)0)), l_276)) , (**g_127)), (**g_127), g_261, l_7[1], g_264), l_48)), l_7[0])), l_273)) , 0x5C83B41989E87D6ELL), l_7[0], &g_425, l_48);
    if ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((((l_1642 = ((0x28L >= ((4L == (((*l_33) &= 3UL) >= ((((**g_251) = (safe_rshift_func_int8_t_s_s((((+65534UL) , l_1638) != (((safe_rshift_func_uint16_t_u_u(0xE693L, g_94.f0)) || l_276) , &l_50)), l_48))) & l_1641) && 0xF0A2L))) > 0x176359CAL)) > l_7[0])) && (*g_252)) , l_1643))), 4)))
    { 
        uint64_t l_1644[1];
        int32_t l_1653[2][2][5] = {{{(-1L),1L,(-1L),1L,(-1L)},{1L,(-1L),0L,(-1L),1L}},{{(-1L),1L,(-1L),1L,(-1L)},{1L,(-1L),0L,(-1L),1L}}};
        int32_t l_1668 = 0xEAFED92FL;
        uint16_t l_1669 = 65535UL;
        int32_t l_1676[3];
        int16_t l_1677[6] = {(-3L),0x9CD0L,(-3L),(-3L),0x9CD0L,(-3L)};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1644[i] = 0x01920B3A077BAC48LL;
        for (i = 0; i < 3; i++)
            l_1676[i] = 0xE7A28F9BL;
lbl_1672:
        for (g_114 = 0; (g_114 <= 5); g_114 += 1)
        { 
            int32_t l_1665 = 1L;
            int16_t *****l_1667[4][6] = {{&g_566[0],(void*)0,&g_566[0],&g_566[0],(void*)0,&g_566[0]},{&g_566[0],(void*)0,&g_566[0],&g_566[0],&g_566[0],&g_566[0]},{&g_566[0],&g_566[0],&g_566[0],&g_566[0],&g_566[0],&g_566[0]},{&g_566[0],&g_566[0],&g_566[0],&g_566[0],&g_566[0],&g_566[0]}};
            int i, j;
            if (l_7[g_114])
                break;
            l_7[g_114] = (l_1644[0] >= (g_1306 == (0L < l_1644[0])));
            for (g_104 = 0; (g_104 <= 1); g_104 += 1)
            { 
                int32_t l_1647 = 1L;
                int32_t ****l_1650 = &g_548[4][0][4];
                int32_t *****l_1649 = &l_1650;
                int i, j;
                l_1647 = (safe_mod_func_int32_t_s_s(l_1644[0], (g_113 , 0x6BFD02A3L)));
                if (g_264)
                    goto lbl_1648;
                if (((**g_385) & (&g_548[1][0][1] != ((*l_1649) = &g_548[4][0][4]))))
                { 
                    if (l_7[g_114])
                        break;
                }
                else
                { 
                    uint16_t l_1662 = 0x7DAEL;
                    int32_t *l_1663 = &l_7[0];
                    uint64_t *l_1664 = &g_1524;
                    int32_t *l_1666 = &g_53;
                    (*l_1666) = ((((safe_mul_func_uint8_t_u_u((0x5CL <= (l_1653[1][1][0] , (safe_mul_func_int16_t_s_s(l_1644[0], (safe_div_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((((((*l_1663) |= l_1662) <= (((((*l_1664) = (18446744073709551608UL ^ (g_311[0][1][2] & g_223.f0))) == l_1653[1][1][0]) != 0xECC6L) , g_1398)) || l_7[g_114]) & l_1643), l_1653[1][1][0])) || 0x6123L) > 18446744073709551615UL), l_1653[1][0][1])) <= 0x1FFCB34B5907542FLL) | l_1641), 4294967287UL)))))), l_1665)) | 0x86A0L) & g_900) | (**g_385));
                    if (l_276)
                        goto lbl_1648;
                    l_7[0] ^= (((void*)0 == l_1667[1][3]) < g_1327);
                    l_1668 ^= (-1L);
                    if ((*l_1666))
                        break;
                }
                for (l_1643 = 0; (l_1643 <= 0); l_1643 += 1)
                { 
                    int i, j, k;
                    ++l_1669;
                    return g_94.f1;
                }
            }
        }
        if ((*g_1015))
        { 
            if (g_182)
                goto lbl_1672;
        }
        else
        { 
            int8_t l_1673 = 0xBFL;
            int32_t *l_1674[7][7][5] = {{{&l_7[0],&g_264,(void*)0,&g_625,&l_7[5]},{&l_7[5],&g_57,&l_1668,(void*)0,(void*)0},{&l_1668,&g_113,(void*)0,&g_173,&g_173},{&g_113,&g_625,&l_7[0],&l_1668,&g_173},{(void*)0,&g_173,&l_1668,&l_7[0],(void*)0},{&g_114,&l_7[0],&l_7[5],(void*)0,&l_7[5]},{(void*)0,(void*)0,&g_332,&l_7[3],&g_114}},{{(void*)0,(void*)0,&g_114,&g_173,(void*)0},{&l_7[0],&g_57,&g_53,&l_1668,&g_332},{(void*)0,(void*)0,(void*)0,&g_173,&l_1668},{&l_7[0],(void*)0,(void*)0,&g_113,&g_173},{(void*)0,&l_7[0],(void*)0,&l_7[0],&g_113},{(void*)0,&g_173,&l_7[5],&g_57,&g_332},{&g_332,&g_625,&g_57,&g_57,&g_114}},{{&g_53,&g_113,&g_173,&l_7[0],&g_625},{&g_173,&g_57,&g_113,&g_113,&g_57},{(void*)0,&g_264,&l_1668,&g_173,&g_57},{&g_173,&g_332,&g_264,&l_1668,(void*)0},{(void*)0,&l_7[5],(void*)0,&g_173,&g_57},{&g_173,&g_53,&l_7[5],&l_7[3],&l_1668},{(void*)0,&l_7[5],&g_173,(void*)0,&g_114}},{{&g_173,&l_7[0],&g_113,&l_7[0],(void*)0},{&g_53,&g_57,&g_53,&l_1668,&l_7[3]},{&g_332,&g_114,&g_53,&g_173,(void*)0},{(void*)0,(void*)0,&g_113,(void*)0,&g_332},{(void*)0,&g_625,&g_173,&g_625,(void*)0},{&l_7[0],(void*)0,&l_7[5],&g_332,(void*)0},{(void*)0,&l_1668,(void*)0,&g_57,&g_114}},{{&l_7[0],&g_173,&g_264,(void*)0,(void*)0},{(void*)0,&g_57,&l_1668,(void*)0,(void*)0},{(void*)0,(void*)0,&g_113,&g_173,&g_332},{&g_114,(void*)0,&g_173,&g_53,(void*)0},{(void*)0,&l_7[0],&g_57,&g_53,&l_7[3]},{&g_113,&l_7[0],&l_7[5],&g_113,(void*)0},{&l_1668,(void*)0,(void*)0,(void*)0,&g_114}},{{&l_7[5],(void*)0,&g_113,&l_7[0],(void*)0},{&g_173,(void*)0,&g_173,(void*)0,&l_1668},{&l_1668,&l_7[3],(void*)0,&l_1668,&g_625},{&g_57,(void*)0,&g_57,(void*)0,&l_7[5]},{&l_1668,(void*)0,&g_332,&l_7[0],(void*)0},{&g_332,&g_264,&g_625,&l_1668,&l_1668},{&g_625,&g_332,(void*)0,&g_53,&g_53}},{{&g_264,&g_57,(void*)0,(void*)0,&g_114},{&g_264,(void*)0,&l_1668,(void*)0,&g_53},{&g_625,(void*)0,&g_57,&l_1668,&l_1668},{&g_332,&g_625,&g_332,&l_1668,(void*)0},{&l_1668,(void*)0,&l_1668,(void*)0,&g_113},{&g_57,&l_7[0],&g_625,(void*)0,&g_332},{&l_1668,&g_114,&l_1668,&g_113,&g_53}}};
            uint64_t l_1678 = 1UL;
            int i, j, k;
            ++l_1678;
            for (g_900 = 0; g_900 < 4; g_900 += 1)
            {
                for (g_182 = 0; g_182 < 4; g_182 += 1)
                {
                    g_175[g_900][g_182] = 0xF6E26C082FDD64BELL;
                }
            }
            if (l_1678)
                goto lbl_1682;
lbl_1682:
            l_1681 = &l_7[0];
            if (l_1653[1][1][0])
            { 
                return l_1669;
            }
            else
            { 
                uint32_t l_1683[5];
                int32_t *l_1686 = &g_625;
                int i;
                for (i = 0; i < 5; i++)
                    l_1683[i] = 18446744073709551615UL;
                l_1683[4] |= 0xEAF7B871L;
                for (g_248 = (-14); (g_248 < 14); ++g_248)
                { 
                    (*g_549) = l_1686;
                    if (g_67)
                        goto lbl_1648;
                    return l_1677[5];
                }
                for (g_611 = 0; (g_611 >= 55); g_611 = safe_add_func_uint32_t_u_u(g_611, 9))
                { 
                    (*l_1686) = (safe_unary_minus_func_int64_t_s((+(g_426[1] >= ((0x9A6BE983L <= (*l_1686)) | (*l_1686))))));
                    (*g_549) = &l_1676[0];
                }
                (*l_1681) |= (*l_1686);
            }
        }
    }
    else
    { 
        uint16_t l_1702 = 1UL;
        for (l_1641 = 0; (l_1641 == (-25)); l_1641--)
        { 
            int64_t l_1696[4];
            const uint16_t l_1722[1][4] = {{0x0310L,0x0310L,0x0310L,0x0310L}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1696[i] = 0L;
            if ((safe_mul_func_uint16_t_u_u((!(l_1696[0] & ((*l_1681) , (safe_div_func_uint32_t_u_u((l_1699 != &g_127), (safe_rshift_func_uint8_t_u_u(((((l_1702 , ((***g_567) && (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_1707 , (*l_1681)), g_263)), (**g_251))))) > g_611) | g_275) != 0x9C3BL), (*g_252)))))))), (-3L))))
            { 
                return g_881;
            }
            else
            { 
                uint8_t l_1716 = 0xCBL;
                int32_t *l_1721 = &l_7[0];
                for (l_1702 = 0; (l_1702 <= 3); l_1702 += 1)
                { 
                    int32_t *l_1720 = &g_173;
                    int i, j;
                    (*l_1720) &= (((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(g_565[(l_1702 + 1)], (((g_175[l_1702][l_1702] = 18446744073709551615UL) & ((((safe_mod_func_int32_t_s_s(0x21C37F43L, (safe_mul_func_int16_t_s_s((l_1716 == ((void*)0 == &g_1398)), ((*l_33)++))))) && ((*l_29) &= (!1UL))) <= 0xE5L) ^ l_1696[0])) , (*l_1681)))), (***g_567))) != l_1696[3]) < g_565[(l_1702 + 1)]);
                    l_1681 = l_1721;
                    if (l_1722[0][2])
                        continue;
                    if (g_223.f0)
                        goto lbl_1648;
                }
            }
        }
    }
    if (g_104)
        goto lbl_1648;
    return g_172[1];
}



static struct S0 * func_2(int64_t  p_3, int64_t  p_4, const int8_t * p_5, int64_t  p_6)
{ 
    union U1 *****l_1607 = (void*)0;
    int32_t *l_1608 = &g_53;
    int64_t *l_1615 = &g_102;
    int64_t **l_1614 = &l_1615;
    int32_t l_1622 = (-1L);
    int16_t *****l_1623 = &g_566[0];
    const int16_t *l_1628[2][4] = {{&g_1523,&g_1523,&g_1523,&g_1523},{&g_1523,&g_1523,&g_1523,&g_1523}};
    const int16_t ** const l_1627 = &l_1628[0][2];
    const int16_t ** const *l_1626 = &l_1627;
    const int16_t ** const **l_1625 = &l_1626;
    const int16_t ** const ***l_1624 = &l_1625;
    int32_t *l_1629 = &g_57;
    int i, j;
    (*l_1608) ^= (l_1607 == l_1607);
    (*l_1629) &= (safe_div_func_int64_t_s_s(((l_1623 = ((p_3 = (safe_mul_func_uint8_t_u_u(((*l_1608) || (l_1622 &= (+(((((((*g_1193) = l_1614) != ((****g_1408) , g_1616)) == (0x2C127B0FL || (safe_add_func_int64_t_s_s(0L, ((**l_1614) &= (((safe_add_func_int16_t_s_s(((~((*l_1608) , g_173)) <= 7UL), 0xA887L)) && 0xA1L) != g_84)))))) | 0xFFD94D391A03992FLL) < 1L) ^ p_4)))), 0x08L))) , (void*)0)) != l_1624), (*l_1608)));
    return (*g_128);
}



static union U2  func_8(const int32_t  p_9, int8_t * const  p_10)
{ 
    uint32_t l_287 = 4294967295UL;
    int32_t l_294 = (-3L);
    int32_t l_297 = 6L;
    int32_t l_298 = 0x8D6BE13DL;
    uint64_t l_302 = 0UL;
    uint8_t **l_330 = &g_252;
    union U2 l_336 = {0L};
    union U1 l_368 = {0x89E9L};
    uint8_t l_373 = 0xBCL;
    uint64_t l_375[3];
    uint8_t l_376 = 255UL;
    int64_t l_420[6] = {0xAC2749E7CF89285CLL,0xAC2749E7CF89285CLL,0xAC2749E7CF89285CLL,0xAC2749E7CF89285CLL,0xAC2749E7CF89285CLL,0xAC2749E7CF89285CLL};
    int32_t **l_429 = &g_185;
    uint32_t l_447 = 0x19B086EDL;
    uint64_t l_448 = 18446744073709551613UL;
    int32_t l_478 = 0x492BCE12L;
    int32_t l_480 = 0x83510189L;
    int8_t l_521 = 1L;
    union U2 **l_541[5][3] = {{&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255}};
    int32_t l_553 = 0x442D2853L;
    uint16_t l_581 = 0xDBB5L;
    const struct S0 l_659 = {0x36697AC7L,0x9E09L};
    struct S0 l_660 = {8UL,0x655FL};
    uint64_t l_671 = 0x3F963E45CA51B2E7LL;
    uint64_t l_672 = 18446744073709551607UL;
    int32_t l_687 = 0L;
    uint32_t l_813 = 0x6505CAACL;
    const int16_t *l_827 = &g_49.f0;
    const int16_t **l_826[4] = {&l_827,&l_827,&l_827,&l_827};
    uint32_t l_830 = 0x364E7946L;
    int32_t l_941 = 0x5B13E292L;
    uint16_t l_951 = 0xB48BL;
    int32_t l_998 = 0xBA4FB19DL;
    union U1 *l_1019 = &l_368;
    union U2 **l_1023 = &g_255;
    int16_t ***l_1081 = (void*)0;
    uint8_t l_1099 = 255UL;
    uint64_t l_1107 = 0x3945327837F8C962LL;
    uint64_t l_1126 = 18446744073709551615UL;
    int16_t **l_1143 = &g_386;
    struct S0 ***l_1159 = &g_128;
    union U2 * const *l_1240 = &g_255;
    union U2 * const **l_1239 = &l_1240;
    union U2 * const ***l_1238 = &l_1239;
    union U2 * const ****l_1237 = &l_1238;
    union U1 * const *l_1259 = &l_1019;
    union U1 * const **l_1258[3][3];
    union U1 * const ***l_1257 = &l_1258[0][2];
    union U1 * const ****l_1256 = &l_1257;
    uint32_t l_1280 = 0x0BBBD592L;
    uint16_t l_1347 = 0xACD8L;
    uint32_t l_1361 = 0xEB6E14C9L;
    uint32_t l_1374 = 0xFB1D71C7L;
    int8_t l_1450 = 0xC2L;
    int16_t *****l_1464[3];
    int32_t l_1478 = (-1L);
    int32_t l_1481 = (-1L);
    int32_t l_1483 = (-1L);
    union U1 **** const l_1502 = &g_1136;
    const int32_t *l_1510[3][5];
    int32_t l_1521[5];
    int64_t **l_1534 = (void*)0;
    uint16_t l_1602 = 0x6862L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_375[i] = 1UL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1258[i][j] = &l_1259;
    }
    for (i = 0; i < 3; i++)
        l_1464[i] = &g_566[1];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_1510[i][j] = &g_114;
    }
    for (i = 0; i < 5; i++)
        l_1521[i] = (-1L);
    return (****l_1238);
}



static int32_t  func_15(struct S0 * p_16, struct S0 * p_17, int32_t  p_18, int32_t  p_19, int32_t  p_20)
{ 
    int32_t *l_277 = &g_264;
    int32_t *l_278 = &g_57;
    int32_t *l_279[5] = {&g_173,&g_173,&g_173,&g_173,&g_173};
    int32_t l_280 = (-5L);
    int i;
    (*l_277) |= 1L;
    --g_281;
    return p_18;
}



static const union U2  func_41(struct S0 * const  p_42, uint32_t  p_43, const struct S0 * p_44)
{ 
    const union U2 l_272 = {1L};
    return l_272;
}



static struct S0 * func_45(uint16_t  p_46, union U1  p_47)
{ 
    int8_t l_63 = 0x18L;
    int32_t l_64 = 9L;
    uint64_t l_73 = 18446744073709551612UL;
    int32_t l_166 = 0xD2ECADEDL;
    int32_t l_174[7] = {(-9L),0L,0L,(-9L),0L,0L,(-9L)};
    union U1 *l_194 = (void*)0;
    union U1 **l_193 = &l_194;
    int32_t *l_226 = (void*)0;
    struct S0 *l_271 = &g_94;
    int i;
    for (p_46 = 0; (p_46 < 55); p_46 = safe_add_func_uint32_t_u_u(p_46, 3))
    { 
        uint64_t l_56[5] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
        int32_t l_66 = 0x4CA72CB5L;
        int32_t l_171 = (-10L);
        union U1 ***l_197 = &g_195;
        int8_t *l_199 = &g_172[1];
        int16_t l_200 = 0xA2E6L;
        const int32_t **l_221[3];
        int i;
        for (i = 0; i < 3; i++)
            l_221[i] = (void*)0;
        for (g_53 = 0; (g_53 > 9); g_53 = safe_add_func_int8_t_s_s(g_53, 6))
        { 
            int32_t *l_58 = &g_57;
            int32_t *l_59 = &g_57;
            int32_t *l_60 = &g_57;
            int32_t *l_61 = &g_57;
            int32_t *l_62 = &g_57;
            int32_t *l_65[4][7] = {{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}};
            int i, j;
            for (g_57 = 0; g_57 < 5; g_57 += 1)
            {
                l_56[g_57] = 0xF8FB6F85A06C0F1ALL;
            }
            g_67++;
            (*l_62) = func_70(l_73, &g_53);
            for (g_67 = 19; (g_67 != 53); ++g_67)
            { 
                struct S0 **l_157 = &g_129[3][4][0];
                int32_t l_159 = 0x7DB42F05L;
                int32_t l_167 = (-1L);
                int32_t l_168 = 0x423CDDDFL;
                int32_t l_181 = 0xA7FDE322L;
                for (g_94.f1 = 0; (g_94.f1 <= 4); g_94.f1 += 1)
                { 
                    struct S0 *l_158 = &g_94;
                    int16_t *l_160 = &g_161;
                    uint16_t *l_162[4][1][1] = {{{&g_163}},{{&g_137}},{{&g_163}},{{&g_137}}};
                    int i, j, k;
                    (*l_58) = l_56[g_94.f1];
                    (*l_59) = l_56[g_94.f1];
                    (*l_58) ^= ((safe_mul_func_int16_t_s_s((((((g_163 ^= (!(((*l_160) ^= ((((((4L ^ ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(l_63, (safe_sub_func_int32_t_s_s(0L, ((1L > ((p_46 && ((p_47.f0 ^ ((safe_add_func_uint32_t_u_u((((g_104 &= ((safe_lshift_func_uint8_t_u_u(((l_64 = ((void*)0 == l_157)) > g_137), 0)) != p_47.f0)) < p_46) ^ g_114), l_56[g_94.f1])) == 253UL)) || 9UL)) <= 0x216E9B38L)) != p_46))))) , 1UL), l_73)) , 0xAAL), p_47.f0)), g_49.f0)) , p_46)) | l_56[0]) ^ g_102) , l_158) != (void*)0) <= l_159)) , 0xEBL))) == p_46) & g_115) >= p_46) == p_47.f0), g_94.f1)) , 0xE1DD48EEL);
                    l_64 |= (g_94.f0 < (l_66 = l_159));
                    if (p_47.f0)
                        break;
                }
                for (g_89 = 0; (g_89 != 18); g_89++)
                { 
                    int64_t l_169 = (-3L);
                    int32_t l_170[5] = {0xEDDB6F60L,0xEDDB6F60L,0xEDDB6F60L,0xEDDB6F60L,0xEDDB6F60L};
                    int i;
                    g_175[0][3]--;
                }
                for (l_167 = 0; (l_167 == (-7)); --l_167)
                { 
                    int32_t **l_180 = &l_59;
                    (*l_180) = &g_173;
                    g_182--;
                    if (g_114)
                        break;
                    if (g_94.f0)
                        break;
                }
            }
            g_185 = &l_171;
        }
    }
    return l_271;
}



static int32_t  func_70(uint16_t  p_71, int32_t * p_72)
{ 
    uint16_t *l_79[3][3][7] = {{{&g_67,&g_67,&g_67,(void*)0,&g_67,(void*)0,&g_67},{(void*)0,(void*)0,(void*)0,&g_67,(void*)0,(void*)0,(void*)0},{(void*)0,&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67}},{{&g_67,&g_67,&g_67,(void*)0,(void*)0,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,(void*)0,(void*)0,(void*)0},{&g_67,&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67}},{{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{(void*)0,&g_67,&g_67,&g_67,(void*)0,(void*)0,&g_67},{&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67,(void*)0}}};
    const union U1 *l_80[1];
    const union U1 **l_81 = &l_80[0];
    int32_t l_82 = 0L;
    struct S0 ***l_91 = (void*)0;
    struct S0 *l_93 = &g_94;
    struct S0 **l_92[3][6] = {{&l_93,&l_93,&l_93,(void*)0,&l_93,(void*)0},{&l_93,&l_93,&l_93,(void*)0,&l_93,&l_93},{&l_93,&l_93,(void*)0,(void*)0,&l_93,&l_93}};
    int32_t l_103[6][6] = {{1L,1L,0x9D7FF731L,0x9D7FF731L,1L,1L},{1L,0x9D7FF731L,0x9D7FF731L,1L,1L,0x9D7FF731L},{1L,1L,0x9D7FF731L,0x9D7FF731L,1L,1L},{1L,0x9D7FF731L,0x9D7FF731L,1L,1L,0x9D7FF731L},{1L,1L,0x9D7FF731L,0x9D7FF731L,1L,1L},{1L,0x9D7FF731L,0x9D7FF731L,1L,1L,0x9D7FF731L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_80[i] = &g_49;
    l_92[1][0] = func_74(l_79[1][1][5], ((*l_81) = l_80[0]), ((((p_71 >= l_82) , (void*)0) != (void*)0) != ((l_82 <= l_82) | p_71)), l_82);
    if (l_82)
    { 
        int32_t *l_95 = &l_82;
        int32_t *l_96 = &g_57;
        int32_t *l_97 = &g_57;
        int32_t *l_98 = (void*)0;
        int32_t *l_99 = &l_82;
        int32_t *l_100 = &l_82;
        int32_t *l_101[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        g_104--;
        (*l_97) = ((*l_100) |= (*p_72));
        return (*p_72);
    }
    else
    { 
        int32_t *l_107 = &g_57;
        int32_t l_108 = 0x52544EE7L;
        int32_t *l_109 = &l_82;
        int64_t l_110 = (-1L);
        int32_t *l_111 = &l_108;
        int32_t *l_112[7];
        int16_t l_134 = (-1L);
        int16_t *l_135[6][6];
        uint32_t l_136 = 0x8C1B86B2L;
        int i, j;
        for (i = 0; i < 7; i++)
            l_112[i] = (void*)0;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
                l_135[i][j] = &g_49.f0;
        }
        g_115--;
        (*l_111) = ((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(g_94.f1, ((((((~(safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(g_53, (((g_127 == &g_128) ^ (((((l_136 = ((((safe_mul_func_int8_t_s_s(((0xDB33L > (((safe_mod_func_uint32_t_u_u(3UL, 4294967295UL)) == 0xA816771FL) >= l_134)) > 1UL), 251UL)) >= (*l_109)) ^ p_71) != (-8L))) != 0x9032L) & g_114) && g_114) >= p_71)) && 0x1F71L))), l_103[5][2]))) , l_103[5][2]) < l_103[5][2]) <= (*l_107)) || l_103[2][5]) > (*p_72)))), g_137)) == 2UL);
    }
    return g_137;
}



static struct S0 ** func_74(uint16_t * p_75, const union U1 * p_76, int64_t  p_77, int8_t  p_78)
{ 
    uint8_t *l_83 = &g_84;
    int32_t l_87[3][5] = {{7L,0xFC308456L,7L,7L,0xFC308456L},{0x2F9032B8L,0xF3004064L,0xF3004064L,0x2F9032B8L,0xF3004064L},{0xFC308456L,0xFC308456L,(-1L),0xFC308456L,0xFC308456L}};
    int32_t *l_88 = &g_57;
    struct S0 **l_90 = (void*)0;
    int i, j;
    g_89 = ((*l_88) = ((++(*l_83)) | l_87[0][4]));
    return l_90;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_175[i][j], "g_175[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_223.f0, "g_223.f0", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_262[i][j][k], "g_262[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_311[i][j][k], "g_311[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_426[i], "g_426[i]", print_hash_value);

    }
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_565[i], "g_565[i]", print_hash_value);

    }
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1398, "g_1398", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1524, "g_1524", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1675[i][j][k], "g_1675[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
