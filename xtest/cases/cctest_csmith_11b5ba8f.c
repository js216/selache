// SPDX-License-Identifier: MIT
// cctest_csmith_11b5ba8f.c --- cctest case csmith_11b5ba8f (csmith seed 297122447)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9b97daea */
/* @exp_ticks 0x33ef */

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

// Options:   -s 297122447 -o /tmp/csmith_gen_8zcz5ys4/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 0xC75B57FDL;
static int32_t g_9 = 0x6E54EE87L;
static int32_t g_36[1][2] = {{1L,1L}};
static uint16_t g_57 = 0x5FECL;
static uint32_t g_65[2][1] = {{0xB64D43D0L},{0xB64D43D0L}};
static int8_t g_75 = 0x49L;
static uint8_t g_159 = 0x54L;
static int16_t g_172 = 0L;
static int32_t g_174 = 0L;
static int16_t g_176 = (-5L);
static uint32_t g_179 = 1UL;



static uint32_t  func_1(void);
static uint8_t  func_10(uint16_t  p_11, uint64_t  p_12);
static int32_t  func_19(uint32_t  p_20, int64_t  p_21, int32_t  p_22);




static uint32_t  func_1(void)
{ 
    uint32_t l_8 = 5UL;
    int32_t l_183[3];
    int32_t l_184 = 0xCA79523BL;
    int i;
    for (i = 0; i < 3; i++)
        l_183[i] = 0xFB2D28ECL;
    for (g_2 = (-26); (g_2 == 24); g_2 = safe_add_func_int8_t_s_s(g_2, 9))
    { 
        uint64_t l_7 = 0x949DFCF09CC25FA5LL;
        g_9 &= (g_2 || (safe_mod_func_int8_t_s_s((l_7 | (7UL > l_8)), g_2)));
        if (g_2)
            goto lbl_185;
    }
lbl_185:
    l_184 = (l_183[1] = ((func_10(l_8, (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((g_2 , ((safe_mod_func_int64_t_s_s(0xED7C6AE49A2F3817LL, g_9)) < 3UL)) == l_8), 0xA955A63A74ADF298LL)) & l_8), l_8))) , g_179) , g_172));
    l_183[1] = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((l_183[0] ^ l_183[0]) >= (g_36[0][1] | g_2)) | l_8), 0x0C02L)), l_8));
    return l_8;
}



static uint8_t  func_10(uint16_t  p_11, uint64_t  p_12)
{ 
    int32_t l_23 = (-1L);
    int64_t l_28[3][2] = {{(-4L),(-4L)},{0L,(-4L)},{(-4L),0L}};
    uint32_t l_29 = 0x421AD7BAL;
    int i, j;
    if (func_19(l_23, (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((l_29++) || (safe_add_func_int8_t_s_s((((g_36[0][1] ^= (1UL > (((safe_mod_func_uint64_t_u_u(l_29, 8UL)) == p_11) , g_9))) >= l_28[0][1]) < 0x43L), 2UL))) | (-6L)) & g_2), g_9)), 0)), g_9))
    { 
        int32_t l_74 = (-4L);
        int32_t l_76[1];
        int i;
        for (i = 0; i < 1; i++)
            l_76[i] = (-8L);
        l_76[0] |= ((safe_mod_func_uint32_t_u_u((((+(250UL > g_2)) <= (l_74 < 1L)) , g_75), (-9L))) != g_36[0][1]);
        l_23 &= (l_76[0] &= g_75);
    }
    else
    { 
        int32_t l_77 = 0xE92B6439L;
        return l_77;
    }
    for (g_75 = (-27); (g_75 != (-14)); g_75++)
    { 
        int32_t l_103 = 1L;
        int32_t l_126[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_126[i][j] = 3L;
        }
        for (g_2 = 0; (g_2 > 26); ++g_2)
        { 
            uint64_t l_86[3];
            int i;
            for (i = 0; i < 3; i++)
                l_86[i] = 0x57033C9969097B38LL;
            g_9 = (~((safe_lshift_func_uint8_t_u_u(((+g_9) , l_28[0][1]), (l_86[0] = p_11))) != (-3L)));
        }
        if (l_28[2][0])
            continue;
        if (((safe_div_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_23 , (((safe_add_func_int16_t_s_s(l_28[0][1], g_75)) , g_36[0][1]) || g_36[0][1])), 1L)), p_11)) & (-3L)), 9UL)) != g_36[0][1]) || p_11), 65532UL)) & p_11))
        { 
            uint64_t l_125 = 0xFF8D1E453246B6D1LL;
            for (g_2 = 0; (g_2 >= (-1)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 8))
            { 
                l_126[0][0] &= (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(l_103, (((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(18446744073709551614UL, ((!(safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(l_103, p_12)) , g_57) || p_12), 0)), p_11)), g_65[0][0])), (-9L))), l_125))) ^ p_11))) || g_57), g_75)), 3)), 0x7126A377049B5B57LL)) == p_12) != 0x24L))) & 0L), l_125));
                g_9 = p_11;
                if (l_125)
                    continue;
            }
        }
        else
        { 
            l_23 = 0x844B9EA6L;
            l_126[0][0] = (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s((g_75 == (1L != ((l_23 &= ((l_29 > g_57) < 0UL)) && 0xBC3DL))), g_36[0][0])) >= g_65[0][0]), p_11));
        }
    }
    for (p_12 = (-2); (p_12 > 43); p_12 = safe_add_func_int64_t_s_s(p_12, 4))
    { 
        int64_t l_137 = 0xDD1CD03AD1870219LL;
        int8_t l_148 = 0x79L;
        int32_t l_158 = (-4L);
        int32_t l_171 = (-8L);
        int32_t l_173 = 5L;
        int32_t l_175 = 0x86ECF404L;
        int32_t l_177 = 0x66642384L;
        int32_t l_178[2];
        int i;
        for (i = 0; i < 2; i++)
            l_178[i] = 3L;
        g_2 &= p_11;
        g_2 = 0xE604A327L;
        for (g_9 = 0; (g_9 >= 0); g_9 -= 1)
        { 
            uint32_t l_135 = 0x132EE097L;
            int32_t l_136 = 2L;
            int32_t l_182 = 0x0C6155EFL;
            for (g_57 = 0; (g_57 <= 0); g_57 += 1)
            { 
                l_23 = l_23;
            }
            l_136 = (p_11 | (safe_add_func_int32_t_s_s(0x93C24CE6L, (l_135 ^ 0x759864EC0B5BC345LL))));
            if ((l_137 != ((safe_sub_func_int32_t_s_s(7L, (safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((g_2 = ((safe_sub_func_uint8_t_u_u(((g_36[0][1] >= l_137) <= l_136), p_12)) == l_136)), 0x6E4BE99DL)), l_148)) & l_136), 0x5848C36732C95206LL)))) || 9UL)))
            { 
                int32_t l_157 = 0x4D41463BL;
                g_159 |= (safe_sub_func_int32_t_s_s((g_2 &= g_65[0][0]), ((l_158 = (safe_sub_func_uint8_t_u_u(9UL, ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_65[0][0] <= (-5L)), l_148)), 0x12L)) < l_157)))) , 4294967295UL)));
                l_158 &= ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(l_29, ((safe_mul_func_uint8_t_u_u((l_23 &= (safe_div_func_uint32_t_u_u(((~((safe_mul_func_int16_t_s_s(g_65[0][0], p_12)) >= 0xE3A2L)) , 5UL), p_11))), g_57)) , l_157))), g_2)) <= l_148) || l_137) & g_75);
                g_179++;
            }
            else
            { 
                if (g_75)
                    break;
                l_182 &= (l_173 = g_36[0][1]);
            }
        }
    }
    return g_174;
}



static int32_t  func_19(uint32_t  p_20, int64_t  p_21, int32_t  p_22)
{ 
    int32_t l_47 = 0x4965DA1FL;
    int32_t l_56 = 0xCB4F7BC7L;
    for (g_9 = 0; (g_9 != 20); g_9 = safe_add_func_uint64_t_u_u(g_9, 1))
    { 
        uint16_t l_55 = 2UL;
        int32_t l_68 = 0xAEFF9B11L;
        for (p_21 = 0; (p_21 <= (-24)); p_21 = safe_sub_func_int16_t_s_s(p_21, 4))
        { 
            int64_t l_54 = 1L;
            l_56 = (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x82L, (safe_mul_func_int8_t_s_s(l_47, (safe_div_func_int16_t_s_s((((safe_add_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((0UL || 18446744073709551611UL) | 0xAAF7L), p_22)) & l_54) && p_20), p_21)) != l_55) ^ 8UL), 0x2D22L)))))), 0xC8L));
            ++g_57;
            for (p_22 = (-18); (p_22 != 24); p_22 = safe_add_func_uint16_t_u_u(p_22, 2))
            { 
                g_2 = (safe_mod_func_uint64_t_u_u(((g_65[0][0] = (!l_54)) ^ p_20), ((((0L & 0xAB37L) <= 4294967295UL) , l_55) & g_2)));
                l_68 = (safe_mod_func_int16_t_s_s((p_21 || g_65[1][0]), (g_57 , (-2L))));
                l_56 = (safe_sub_func_uint32_t_u_u(0x003F8612L, p_20));
            }
        }
    }
    return p_22;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
