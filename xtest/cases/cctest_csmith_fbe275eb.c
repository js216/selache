// SPDX-License-Identifier: MIT
// cctest_csmith_fbe275eb.c --- cctest case csmith_fbe275eb (csmith seed 4225922539)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x91062e3c */
/* @exp_ticks 0x34bd */

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

// Options:   -s 4225922539 -o /tmp/csmith_gen_o5rrq6cf/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 7L;
static int32_t g_6[3][3] = {{0x0BC5021CL,0x0BC5021CL,0x0BC5021CL},{4L,(-1L),4L},{0x0BC5021CL,0x0BC5021CL,0x0BC5021CL}};
static uint64_t g_31 = 18446744073709551610UL;
static int8_t g_54 = 7L;
static int32_t g_63 = (-1L);
static uint8_t g_94 = 4UL;
static int16_t g_106[2][3] = {{0x85A4L,(-1L),0x85A4L},{0x85A4L,(-1L),0x85A4L}};
static int8_t g_107[1][4] = {{0x8CL,0x8CL,0x8CL,0x8CL}};
static int32_t g_112 = (-10L);
static int16_t g_113[1] = {1L};



static int64_t  func_1(void);
static int16_t  func_9(uint8_t  p_10);
static int8_t  func_18(uint64_t  p_19, int32_t  p_20, int16_t  p_21, uint32_t  p_22);




static int64_t  func_1(void)
{ 
    uint64_t l_5[3][3] = {{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{0x2D672A8358BD4DFBLL,0x89351F2000252604LL,0x2D672A8358BD4DFBLL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}};
    int32_t l_13 = 0L;
    int i, j;
    for (g_2 = 23; (g_2 <= (-15)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 5))
    { 
        uint8_t l_130 = 255UL;
        int32_t l_140 = (-1L);
        for (g_6[0][0] = 0; (g_6[0][0] <= 2); g_6[0][0] += 1)
        { 
            int i, j;
            if ((g_112 = (safe_sub_func_int64_t_s_s(((l_130 = func_9((safe_rshift_func_uint16_t_u_u(((l_13 = (-1L)) || ((safe_mod_func_int16_t_s_s(l_5[g_6[0][0]][g_6[0][0]], (safe_mul_func_uint8_t_u_u((func_18(g_2, g_2, g_6[2][2], g_6[0][2]) , 255UL), g_2)))) < g_6[0][0])), l_5[1][2])))) > 0x4102L), 0x8204A9F0E05C4B44LL))))
            { 
                uint64_t l_131[4][4] = {{0x5CBE7429D79668BELL,0UL,0x5CBE7429D79668BELL,0UL},{0x5CBE7429D79668BELL,0UL,0x5CBE7429D79668BELL,0UL},{0x5CBE7429D79668BELL,0UL,0x5CBE7429D79668BELL,0UL},{0x5CBE7429D79668BELL,0UL,0x5CBE7429D79668BELL,0UL}};
                int i, j;
                l_131[0][2]--;
                if (l_5[g_6[0][0]][g_6[0][0]])
                    continue;
            }
            else
            { 
                return g_31;
            }
            for (g_31 = 0; (g_31 <= 2); g_31 += 1)
            { 
                int32_t l_141 = 0x47ACEDFCL;
                int i, j;
                l_13 = ((((-1L) > ((safe_mul_func_int16_t_s_s(((l_5[g_31][g_6[0][0]] = l_130) < (((safe_mod_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_140 = (g_113[0] , l_130)), l_13)), l_13)) & l_141) != l_130)), (-1L))) < 0x7277L)) || 1UL) , 1L);
                if (l_5[g_6[0][0]][g_6[0][0]])
                    break;
                if (l_5[g_31][g_6[0][0]])
                    continue;
            }
            return g_6[0][0];
        }
    }
    g_6[0][0] = g_106[1][1];
    return l_13;
}



static int16_t  func_9(uint8_t  p_10)
{ 
    uint64_t l_55 = 0x7C4BD4AC961F9DA9LL;
    int32_t l_66 = 0xFEA059E6L;
    int32_t l_96 = 0xCF5D4612L;
    int32_t l_111 = (-6L);
    int32_t l_114 = 0xBC52267DL;
    int32_t l_115 = (-10L);
    l_55 = (g_54 |= p_10);
    for (l_55 = 12; (l_55 >= 23); l_55 = safe_add_func_uint8_t_u_u(l_55, 3))
    { 
        uint64_t l_60 = 9UL;
        int32_t l_64[3];
        int32_t l_65 = 0x5DF97F74L;
        int i;
        for (i = 0; i < 3; i++)
            l_64[i] = 8L;
        l_66 ^= (l_65 = (l_64[0] = (((safe_rshift_func_uint8_t_u_s(((g_63 &= ((l_60 & g_6[0][0]) ^ (safe_mul_func_uint16_t_u_u((g_54 & 0UL), p_10)))) , 0x80L), l_60)) , g_31) >= g_31)));
    }
    for (g_54 = (-22); (g_54 == (-11)); g_54 = safe_add_func_uint8_t_u_u(g_54, 3))
    { 
        uint8_t l_95 = 1UL;
        uint32_t l_97 = 1UL;
        int32_t l_108 = 0L;
        int32_t l_109 = (-1L);
        int32_t l_110[3][3] = {{0x46242303L,(-1L),0x46242303L},{0x6BDC2D20L,0x6BDC2D20L,0x6BDC2D20L},{0x46242303L,(-1L),0x46242303L}};
        int i, j;
        if ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_96 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((l_66 = (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((!(((g_63 = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((0xEFF0D54DF9633F8ALL >= (safe_mod_func_uint8_t_u_u((g_94 = 0x81L), l_95))), l_95)), l_95)), 1L)), l_66))) != 0x1655ED6FL) != l_55)) ^ 18446744073709551607UL) ^ 0L) & l_95), p_10)), g_31)) , 0x168B3AD7L) , g_6[0][0])), g_54)) ^ g_2) != p_10), l_55)) & 18446744073709551615UL), 7))) ^ l_97), l_95)), 5)))
        { 
            for (l_55 = 0; (l_55 >= 54); l_55++)
            { 
                return p_10;
            }
        }
        else
        { 
            uint16_t l_116[4][4] = {{0xEB7CL,0xEB7CL,1UL,1UL},{0xEB7CL,0xEB7CL,1UL,1UL},{0xEB7CL,0xEB7CL,1UL,1UL},{0xEB7CL,0xEB7CL,1UL,1UL}};
            int32_t l_128 = 4L;
            int32_t l_129 = 1L;
            int i, j;
            l_109 = (((safe_lshift_func_int16_t_s_s((+((safe_rshift_func_uint8_t_u_u((+(((((l_116[0][2]--) == (safe_rshift_func_int16_t_s_s((l_108 = (l_66 = (p_10 , (0x0E57L == (safe_sub_func_int32_t_s_s((l_128 = (((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_113[0] = (!0xA0B0D0ED264C9D3CLL)), p_10)), 0x68L)) , 1UL) == l_97)), l_115)))))), 1))) <= 0x87L) && p_10) , l_128)), 4)) , l_95)), p_10)) , 65535UL) <= l_129);
            return g_2;
        }
        if (l_66)
            break;
    }
    return g_107[0][3];
}



static int8_t  func_18(uint64_t  p_19, int32_t  p_20, int16_t  p_21, uint32_t  p_22)
{ 
    uint16_t l_23[4][3] = {{65527UL,65527UL,7UL},{0x764CL,0x764CL,0x77CCL},{65527UL,65527UL,7UL},{0x764CL,0x764CL,0x77CCL}};
    int32_t l_53 = 0x36EAF0ABL;
    int i, j;
    for (p_22 = 0; (p_22 <= 2); p_22 += 1)
    { 
        uint32_t l_30 = 0xA165F5C9L;
        int32_t l_34 = (-6L);
        g_31 = (safe_lshift_func_uint8_t_u_u(g_2, (p_22 < (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(5UL, l_30)), p_19)))));
        for (l_30 = 0; (l_30 <= 2); l_30 += 1)
        { 
            uint16_t l_46[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_46[i][j] = 0x0EBEL;
            }
            for (g_31 = 0; (g_31 <= 2); g_31 += 1)
            { 
                int i, j;
                l_34 = (safe_sub_func_int16_t_s_s((1UL == l_23[(g_31 + 1)][p_22]), (18446744073709551615UL ^ l_30)));
            }
            l_34 = (safe_lshift_func_uint16_t_u_s(((p_20 , p_20) && ((!((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_46[0][1] > 250UL), 4)), 7)), 1L)) != g_6[0][1]), l_23[1][0])) | g_6[1][1])) , 1L)), p_22));
            for (p_21 = 20; (p_21 < (-3)); --p_21)
            { 
                const uint64_t l_52 = 1UL;
                l_53 &= ((safe_unary_minus_func_uint32_t_u(l_46[0][1])) >= ((safe_div_func_uint8_t_u_u(l_52, 0xF0L)) & 0x26A09395L));
            }
        }
    }
    return g_6[0][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_106[i][j], "g_106[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_107[i][j], "g_107[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
