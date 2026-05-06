// SPDX-License-Identifier: MIT
// cctest_csmith_a0e379f8.c --- cctest case csmith_a0e379f8 (csmith seed 2699262456)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb09f1c47 */

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

// Options:   -s 2699262456 -o /tmp/csmith_gen_umy76y6n/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2[5] = {0x60477862L,0x60477862L,0x60477862L,0x60477862L,0x60477862L};
static int64_t g_5 = 0x167FA5C62E08974BLL;
static uint16_t g_8[4] = {0x39BAL,0x39BAL,0x39BAL,0x39BAL};
static uint8_t g_40 = 0xBBL;
static int16_t g_54 = 0xA5F0L;
static uint32_t g_56 = 0UL;
static uint32_t g_65 = 0xFF402E83L;
static int16_t g_82 = (-1L);
static int64_t g_86[3][2][1] = {{{0x0EAC2F6E5819C35ELL},{0x0EAC2F6E5819C35ELL}},{{0x0EAC2F6E5819C35ELL},{0x0EAC2F6E5819C35ELL}},{{0x0EAC2F6E5819C35ELL},{0x0EAC2F6E5819C35ELL}}};
static uint64_t g_91 = 1UL;
static uint32_t g_119 = 0x1B1FA0A7L;
static int8_t g_126[1][4] = {{0xC7L,0xC7L,0xC7L,0xC7L}};
static uint16_t g_142 = 0xD3A0L;
static int32_t g_143 = 0xBD0B17AAL;
static uint8_t g_144 = 254UL;
static uint64_t g_157 = 0x1466E0B1FDE04AB7LL;
static uint16_t g_161 = 0x0E40L;
static uint32_t g_168 = 18446744073709551615UL;
static int32_t g_180 = 0xA72EEF0EL;
static int32_t g_182 = 6L;



static uint16_t  func_1(void);
static int8_t  func_11(int16_t  p_12, uint32_t  p_13, uint16_t  p_14, uint16_t  p_15, int64_t  p_16);
static int64_t  func_21(int32_t  p_22, const uint64_t  p_23, int32_t  p_24, uint64_t  p_25, int8_t  p_26);
static int8_t  func_30(int32_t  p_31, uint8_t  p_32, int32_t  p_33, uint16_t  p_34, uint8_t  p_35);




static uint16_t  func_1(void)
{ 
    int32_t l_18[1];
    int32_t l_181 = 0x79F58EA2L;
    int i;
    for (i = 0; i < 1; i++)
        l_18[i] = 4L;
    for (g_2[0] = 0; (g_2[0] != (-8)); g_2[0] = safe_sub_func_uint32_t_u_u(g_2[0], 2))
    { 
        int32_t l_17 = 0x4AD38DC5L;
        int32_t l_160 = (-1L);
        g_5 = g_2[3];
        if ((safe_lshift_func_uint16_t_u_u((g_8[0] = 65530UL), (safe_lshift_func_int8_t_s_u(func_11(l_17, g_2[2], ((g_5 > l_18[0]) & 248UL), g_2[1], g_2[2]), 5)))))
        { 
            uint16_t l_131 = 8UL;
            uint32_t l_166[2];
            int i;
            for (i = 0; i < 2; i++)
                l_166[i] = 0x2B3D635DL;
            if ((((l_17 == ((g_126[0][3] = (~(((g_86[2][0][0] | ((safe_lshift_func_uint8_t_u_u(1UL, l_18[0])) < 0xC0F6L)) != 0x6A2D9A964D50EE72LL) , 0xDB4E21E3D09CE060LL))) , l_17)) > g_56) , g_8[0]))
            { 
                uint8_t l_130 = 2UL;
                int32_t l_140 = 1L;
                int32_t l_141 = (-1L);
                l_131 |= (safe_sub_func_int32_t_s_s((l_130 = (!l_17)), g_40));
                g_142 = (g_86[2][1][0] | ((safe_mul_func_uint8_t_u_u(((l_141 = ((l_140 = (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(l_130, g_54)) , (l_17 == g_2[0])), g_86[2][0][0]))) , 0xA4FECFE75BA722EBLL)) || g_2[3]), 0xD3L)) < 1L));
                if (l_17)
                    break;
            }
            else
            { 
                uint64_t l_154 = 2UL;
                ++g_144;
                if (g_144)
                    continue;
                l_154 = ((safe_mul_func_int16_t_s_s((g_2[2] != ((((safe_mul_func_int8_t_s_s(g_86[1][0][0], g_5)) ^ ((safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s(g_82, (-3L))))) | 18446744073709551607UL)) , g_5) < g_8[0])), g_126[0][1])) & 1UL);
            }
            for (g_40 = 0; (g_40 != 35); g_40 = safe_add_func_uint64_t_u_u(g_40, 5))
            { 
                uint8_t l_167 = 0xAFL;
                --g_157;
                g_161--;
                g_168 &= (((safe_div_func_uint64_t_u_u((g_157 |= l_166[0]), l_18[0])) ^ ((g_142 >= (l_160 || l_167)) || 1UL)) > 18446744073709551615UL);
            }
            if (l_131)
                break;
        }
        else
        { 
            int32_t l_169[5] = {0x4159496DL,0x4159496DL,0x4159496DL,0x4159496DL,0x4159496DL};
            int i;
            return l_169[3];
        }
        g_182 ^= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((((g_180 = ((safe_add_func_uint64_t_u_u(((l_18[0] = g_119) , g_54), (0UL | (g_8[0] ^= (0x63L > 0x81L))))) <= 0x19775E7FL)) < g_2[1]) , 0x7270L), l_181)) <= g_2[0]) >= 0L) && 0x52D8D885D17D95D1LL), l_17)), 3)), g_65));
    }
    return l_18[0];
}



static int8_t  func_11(int16_t  p_12, uint32_t  p_13, uint16_t  p_14, uint16_t  p_15, int64_t  p_16)
{ 
    uint32_t l_27 = 0UL;
    int32_t l_38[3][1][5] = {{{0x00CE3D97L,0x4C638299L,1L,0xF748BBE2L,0xF748BBE2L}},{{0x4C638299L,0x00CE3D97L,0x4C638299L,1L,0xF748BBE2L}},{{0xFDA6C2E3L,(-5L),0xF748BBE2L,(-5L),0xFDA6C2E3L}}};
    int16_t l_39 = 0x3B06L;
    int i, j, k;
    l_38[0][0][3] = (safe_sub_func_int8_t_s_s((func_21(l_27, p_15, ((safe_add_func_uint16_t_u_u(((p_14 , (l_38[2][0][2] = func_30((((safe_add_func_uint8_t_u_u((g_40--), (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((((l_27 < g_5) && g_2[1]) | 1UL), 0xE255BB5FL)), 4)), 0x09C821F997EC53A2LL)) , l_27) >= 6L))) || g_2[0]) == 0xA932L), g_2[0], l_38[0][0][2], l_38[2][0][3], g_2[0]))) || g_54), g_2[2])) == 0x69L), p_16, l_39) && 1UL), 0UL));
    for (l_39 = (-15); (l_39 != (-14)); l_39++)
    { 
        uint8_t l_122 = 0xD2L;
        g_119 = (g_65 && (safe_mul_func_int16_t_s_s((g_91 && 0L), (((safe_mod_func_int64_t_s_s((p_14 != g_2[0]), l_38[0][0][3])) , 0xE71BBE26L) | 2UL))));
        l_122 ^= (safe_mul_func_int8_t_s_s(((0x87C22977L == g_65) , (-10L)), (65531UL == g_2[1])));
    }
    return p_14;
}



static int64_t  func_21(int32_t  p_22, const uint64_t  p_23, int32_t  p_24, uint64_t  p_25, int8_t  p_26)
{ 
    int16_t l_63 = 0xAC35L;
    uint16_t l_64 = 0x19E2L;
    uint32_t l_83[3][3][4] = {{{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL}},{{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL}},{{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL},{0xB503A71BL,0xB503A71BL,0xB503A71BL,0xB503A71BL}}};
    int32_t l_90 = 0xF5E99A55L;
    int i, j, k;
    if ((((safe_rshift_func_int8_t_s_u((((255UL <= (g_40 = ((((safe_div_func_uint64_t_u_u(1UL, g_40)) > (safe_rshift_func_uint16_t_u_s(l_63, 7))) ^ p_22) | p_23))) && p_23) ^ p_22), l_64)) || g_54) , 0xD26DA612L))
    { 
        int32_t l_77 = 1L;
        uint32_t l_78 = 18446744073709551615UL;
        uint16_t l_79 = 0x108CL;
        g_65 = 0xBBD88186L;
        l_79 = (safe_unary_minus_func_int32_t_s((l_63 < ((safe_div_func_uint16_t_u_u(p_26, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((0x0C8B8AFECA80087DLL | p_25), l_77)), 6)), p_26)) & l_63))) != l_78))));
        g_82 = (safe_lshift_func_int16_t_s_s((-1L), 9));
    }
    else
    { 
        int16_t l_85 = 0x3286L;
        int32_t l_88 = 0xE4C4DC47L;
        for (g_65 = 0; (g_65 <= 2); g_65 += 1)
        { 
            int32_t l_87 = 9L;
            g_86[2][1][0] = (~l_85);
            l_88 = l_87;
            for (l_64 = 0; (l_64 <= 2); l_64 += 1)
            { 
                uint32_t l_89 = 0x79BBDC21L;
                l_89 = g_86[2][1][0];
                if (g_82)
                    continue;
                ++g_91;
            }
        }
    }
    for (g_91 = 0; (g_91 >= 56); g_91 = safe_add_func_int32_t_s_s(g_91, 2))
    { 
        uint16_t l_110[3][5][4] = {{{0xF140L,0xE791L,0UL,1UL},{65528UL,1UL,0xABA4L,1UL},{1UL,0UL,0xF140L,1UL},{0xF140L,1UL,1UL,1UL},{0xE791L,0xE791L,0xABA4L,65528UL}},{{0xE791L,0UL,1UL,0xE791L},{0xF140L,65528UL,0xF140L,1UL},{1UL,65528UL,0xABA4L,0xE791L},{65528UL,0UL,0UL,65528UL},{0xF140L,0xE791L,0UL,1UL}},{{65528UL,1UL,0xABA4L,1UL},{1UL,0UL,0xF140L,1UL},{0xF140L,1UL,1UL,1UL},{0xE791L,0xE791L,0xABA4L,65528UL},{0xE791L,0UL,1UL,0xE791L}}};
        int i, j, k;
        for (g_5 = 25; (g_5 != 17); g_5 = safe_sub_func_uint32_t_u_u(g_5, 8))
        { 
            uint64_t l_102 = 1UL;
            int32_t l_103 = 0x68E4F1A1L;
            l_103 |= ((safe_add_func_int64_t_s_s((g_40 , (safe_mod_func_uint32_t_u_u((0x5FBEL ^ ((p_25 == (l_102 , 0x0257628AL)) == 18446744073709551615UL)), l_90))), p_23)) && g_91);
        }
        l_90 &= (safe_mul_func_uint8_t_u_u((((++g_65) < 0x10172C61L) , (safe_mul_func_uint16_t_u_u(((g_40 , g_2[0]) & p_25), l_110[0][2][1]))), 0x43L));
    }
    return p_24;
}



static int8_t  func_30(int32_t  p_31, uint8_t  p_32, int32_t  p_33, uint16_t  p_34, uint8_t  p_35)
{ 
    uint32_t l_49[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_49[i][j] = 0x4126315BL;
    }
    for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
    { 
        uint32_t l_55 = 4UL;
        g_56 = ((((-4L) ^ ((((~((((((+(g_2[0] || (g_54 = ((safe_mul_func_int8_t_s_s((g_2[1] <= (65535UL > g_2[0])), g_2[0])) <= 1L)))) , l_49[1][0]) >= 0xCF39588DFEF28ED3LL) != 1L) , g_2[0]) , p_33)) || p_35) < l_55) | g_40)) ^ l_49[1][0]) != g_5);
        for (p_31 = 0; (p_31 <= 0); p_31 += 1)
        { 
            int i, j;
            return l_49[p_31][g_5];
        }
    }
    return p_35;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_126[i][j], "g_126[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
